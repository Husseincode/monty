#include "monty.h"

/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stacked_s **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->a);
}
