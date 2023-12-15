#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_pstr(stacked_s **head, unsigned int count)
{
	stacked_s *i;
	(void)count;

	i = *head;
	while (i)
	{
		if (i->a > 127 || i->a <= 0)
		{
			break;
		}
		printf("%c", i->a);
		i = i->onto;
	}
	printf("\n");
}
