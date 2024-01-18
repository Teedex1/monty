#include "monty.h"
/**
 * f_add - adds the top element of the stack
 * @head: stck head
 * @counter: line_number
 * Return: 0
 */
void f_add(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n += (*head)->n;
	pop_stack(head);
}

/**
 * pop_stack - pop stack
 * @head: head of pop
 * Return: 0
 */
void pop_stack(stack_t **head)
{
	stack_t *tmp;
	if (*head == NULL)
		return;
	tmp = *head;
	*head = tmp->next;
	free(tmp);
}
