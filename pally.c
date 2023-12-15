#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stacked_s **head, unsigned int count)
{
	stacked_s *i;
	(void)count;

	i = *head;
	if (i == NULL)
	{
		return;
	}
	while (i)
	{
		printf("%d\n", i->a);
		i = i->onto;
	}
}
