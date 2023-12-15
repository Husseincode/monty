#include "monty.h"

/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stacked_s **head, unsigned int count)
{
	stacked_s *xua;
	int sus, sedon;

	xua = *head;
	for (sedon = 0; xua != NULL; sedon++)
	{
		xua = xua->onto;
	}
	if (sedon < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	xua = *head;
	sus = xua->onto->a - xua->a;
	xua->onto->a = sus;
	*head = xua->onto;
	free(xua);
}
