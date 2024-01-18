#include "monty.h"
/**
 * f_pall - prints stack
 * @head: stack head
 * @counter: integer
 * Return: 0
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;

	(void)counter;
	
	h = *head;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
