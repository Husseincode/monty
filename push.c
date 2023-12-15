#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_push(stacked_s **head, unsigned int count)
{
	int b, k = 0, flagged = 0;

	if (bus.arguments)
	{
		if (bus.arguments[0] == '-')
			k++;
		for (; bus.arguments[k] != '\0'; k++)
		{
			if (bus.arguments[k] > 57 || bus.arguments[k] < 48)
				flagged = 1; }
		if (flagged == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.filed);
			free(bus.entails);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	b = atoi(bus.arguments);
	if (bus.kiffy == 0)
	{
		addnode(head, b);
	}
	else
	{
		addqueue(head, b);
	}
}
