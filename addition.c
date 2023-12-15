#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stacked_s **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	xua = i->a + i->onto->a;
	i->onto->a = xua;
	*head = i->onto;
	free(i);
}
