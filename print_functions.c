#include "monty.h"

/**
 * pall - prints all nodes
 * @stack: nodes
 * @line_number: file line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack)
	{
		printf("%i\n", (*stack)->n);
		stack = &(*stack)->next;
	}
}

/**
 * pint - function that prints the value at the top of the stack,
 * followed by a new line.
 * @stack: pointer to the header of the nodesi
 * @line_number: line number of file
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * nop -  doesn’t do anything.
 * @stack: nodes
 * @line_number: file line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
