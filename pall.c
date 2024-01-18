#include "monty.h"
/**
 * f_pall - prints stack
 * @head: stack head
 * @counter: integer
 * Return: 0
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	(void)counter;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
