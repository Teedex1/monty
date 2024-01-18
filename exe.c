#include "monty.h"
#include <stdio.h>
/**
 * execute - excutes the opcode
 * @content: line content
 * @stack: head satck
 * @counter: line_counter
 * @file: pointer
 * Return: 0
 */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop},
		{"add", f_add},
		{"swap", f_swap},
		{"div", f_div},
		{"mod", f_mod},
		{"mul", f_mul},
		{"sub", f_sub},
		{"nop", f_nop},
		{"pchar",f_pchar},
		{NULL, NULL}
	};

	unsigned int i = 0;
	char *op;


	op = strtok(content, " \n\t");
	if (!op || op[0] == '#')
		return;

	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
	fclose(file);
	free(content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}

