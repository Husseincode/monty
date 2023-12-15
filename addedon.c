#include "monty.h"

/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @a: new_value
 * Return: no return
*/
void addnode(stacked_s **head, int a)
{

	stacked_s *new_node, *xua;

	xua = *head;
	new_node = malloc(sizeof(stacked_s));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (xua)
	{
		xua->previous = new_node;
	}
	new_node->a = a;
	new_node->onto = *head;
	new_node->previous = NULL;
	*head = new_node;
}
