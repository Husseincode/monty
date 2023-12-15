#include "monty.h"
busted_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *entails;
	FILE *filed;
	size_t sz = 0;
	ssize_t rd_ln = 1;
	stacked_s *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filed = fopen(argv[1], "r");
	bus.filed = filed;
	if (!filed)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rd_ln > 0)
	{
		entails = NULL;
		rd_ln = getline(&entails, &sz, filed);
		bus.entails = entails;
		count++;
		if (rd_ln > 0)
		{
			exec(entails, &stack, count, filed);
		}
		free(entails);
	}
	free_stack(stack);
	fclose(filed);

	return (0);
}
