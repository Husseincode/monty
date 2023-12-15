#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_pchar(stacked_s **head, unsigned int count)
{
	stacked_s *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (i->a > 127 || i->a < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->a);
}
