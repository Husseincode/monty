#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stacked_s *head)
{
	stacked_s *xua;

	xua = head;
	while (head)
	{
		xua = head->onto;
		free(head);
		head = xua;
	}
}
