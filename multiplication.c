#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_mul(stacked_s **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	xua = i->onto->a * i->a;
	i->onto->a = xua;
	*head = i->onto;
	free(i);
}
