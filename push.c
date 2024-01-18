#include "monty.h"
/**
 * f_push - add node to stack
 * @head: head of stack
 * @counter: integer
 * Return: 0
 */
void f_push(stack_t **head, unsigned int counter)
{
	char *arg;
	int value;

	arg = bus.arg;

	if (arg == NULL || !is_integer(arg))
	{
		fprintf(stderr, "L%d: usage push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);

	if (addnode(head, value))
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}

int is_integer(const char *str)
{
	if (!str || *str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str) && *str != '-' && *str != '+')
			return (0);
		str++;
	}
	return (1);
}
