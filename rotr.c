#include "monty.h"

/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stacked_s **head, __attribute__((unused)) unsigned int count)
{
	stacked_s *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->onto == NULL)
	{
		return;
	}
	while (cpy->onto)
	{
		cpy = cpy->onto;
	}
	cpy->onto = *head;
	cpy->previous->onto = NULL;
	cpy->previous = NULL;
	(*head)->previous = cpy;
	(*head) = cpy;
}
