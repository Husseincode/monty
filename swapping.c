#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_swap(stacked_s **head, unsigned int count)
{
	stacked_s *i;
	int length = 0, xua;

	i = *head;
	while (i)
	{
		i = i->onto;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	xua = i->a;
	i->a = i->onto->a;
	i->onto->a = xua;
}
