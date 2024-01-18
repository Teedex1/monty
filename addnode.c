#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of stack
 * @n: new_value
 * Return: 0
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: UNable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
}

