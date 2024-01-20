#include "monty.h"
/**
 * f_swap - swaps the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: 0
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *first;
	stack_t *second;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	first = *head;
	second = first->next;

	first->prev = second;
	first->next = second->next;
	second->prev = NULL;
	second->next = first;

	if (first->next != NULL)
		first->next->prev = first;
	*head = second;
}
