#include "monty.h"
/**
 * f_mod - modulo
 * @head: stack head
 * @counter: line_number
 * Return: 0
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (h == NULL || h->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h->next->n %= h->n;
	*head = h->next;
	free(h);
}
