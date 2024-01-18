#include "monty.h"
/**
 * f_push - add node to stack
 * @head: head of stack
 * @counter: integer
 * Return: 0
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0;

	if (bus.arg == NULL)
	{
		fprintf(stderr, "L%d: usage push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (bus.arg[j] != '\0')
	{
		if (!isdigit(bus.arg[j]))
		{
			fprintf(stderr, "L%d: usage: Push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		j++;
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
	{
		fprintf(stderr, "L%d: addqueue function not defined\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
			

