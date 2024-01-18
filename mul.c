#include "monty.h"
/**
 * f_mul - multiplies the top two
 * @head: stack head
 * @counter: line_numer
 * Return: 0
 */
void f_mul(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n *= (*head)->n;
	pop_stack(head);
}


