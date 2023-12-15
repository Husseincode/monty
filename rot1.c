#include "monty.h"

/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stacked_s **head,  __attribute__((unused)) unsigned int count)
{
	stacked_s *pmt = *head, *xua;

	if (*head == NULL || (*head)->onto == NULL)
	{
		return;
	}
	xua = (*head)->onto;
	xua->previous = NULL;
	while (pmt->onto != NULL)
	{
		pmt = pmt->onto;
	}
	pmt->onto = *head;
	(*head)->onto = NULL;
	(*head)->previous = pmt;
	(*head) = xua;
}
