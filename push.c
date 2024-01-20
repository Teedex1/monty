#include "monty.h"
/**
 * f_push - add node to stack
 * @head: head of stack
 * @counter: integer
 * Return: 0
 */
void f_push(stack_t **head, unsigned int counter)
{
	int value;

	if (bus.arg == NULL || !is_integer(bus.arg))
	{
		fprintf(stderr, "L%d: USAGE: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	value = atoi(bus.arg);
	addnode(head, value);
}
/**
 * is_integer - integer
 * @str: string
 * Return:  0
 */
int is_integer(const char *str)
{
	int i = 0;

	if (str == NULL || *str == '\0')
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	for (; str[i] != '\0'; ++i)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
