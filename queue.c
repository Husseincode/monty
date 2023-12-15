#include "monty.h"

/**
 * f_queue - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_queue(stacked_s **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.kiffy = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stacked_s **head, int t)
{
	stacked_s *new_node, *xua;

	xua = *head;
	new_node = malloc(sizeof(stacked_s));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->a = t;
	new_node->onto = NULL;
	if (xua)
	{
		while (xua->onto)
			xua = xua->onto;
	}
	if (!xua)
	{
		*head = new_node;
		new_node->previous = NULL;
	}
	else
	{
		xua->onto = new_node;
		new_node->previous = xua;
	}
}
