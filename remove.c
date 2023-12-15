#include "monty.h"

/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stacked_s **head, unsigned int count)
{
	stacked_s *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->onto;
	free(i);
}
