#include "monty.h"
/**
 * f_pstr - prints the string
 * @head: stack head
 * @counter: line_number
 * Return: 0
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	(void)counter;

	while (h && h->n > 0 && h->n <= 127)
	{
		putchar(h->n);
		h = h->next;
	}
	putchar('\n');
}
