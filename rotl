#include "monty.h"
/**
 * f_rotl - rotates the stack
 * @head: head
 * @counter: line_number
 * Return: 0
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp;

	if (*head == NULL || (*head)->next == NULL)
		return;
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;


	tmp->next = *head;
	(*head)->prev = tmp;
	*head = (*head)->next;
	(*head)->prev = NULL;

	tmp->prev = NULL;
}

