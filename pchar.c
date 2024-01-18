#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack: Pointer to the stack.
 * @line_number: Line number in the Monty bytecode file.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	int ascii_value = (*stack)->n;

	if (ascii_value < 0 || ascii_value > 127)
	{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
	}

	printf("%c\n", (char)ascii_value);

	stack_t *temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
	(*stack)->prev = NULL;
	}
	free(temp);
}

/**
 * processLine - Processes a line of Monty bytecode.
 * @line: Line to be processed.
 * @line_number: Line number in the Monty bytecode file.
 * @stack: Pointer to the stack.
 */

void processLine(char *line, unsigned int line_number, stack_t **stack)
{
	char *opcode = strtok(line, " \t\n");

	if (opcode == NULL || opcode[0] == '#')
	{
	return;
	}

	if (strcmp(opcode, "push") == 0)
	{
	}
	else if (strcmp(opcode, "pchar") == 0)
	{
	pchar(stack, line_number);
	}
	else
	{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
	}
}
