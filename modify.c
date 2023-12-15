#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stacked_s **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	xua = i->onto->a % i->a;
	i->onto->a = xua;
	*head = i->onto;
	free(i);
}
