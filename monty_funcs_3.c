#include "monty.h"
/**
 * monty_nop - does absolutely nothing for the monty opcode 'nop'
 * @stack: pointer to the top mode of a stack_t linked list
 * @line_number: current working line number of a monty bytecodes file
 *
 * Return: void
 */
void mony_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * monty_pchar - prints the character in the top value
 * node of a stack_t linked list
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: current working line number of a monty bytecodes file
 *
 * Return: void
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		set_op_tok_error(pchar_error(line_number,
					"value out of range"));
		return;
	}
	printf("%c\n", (*stack)->next->n);
}
/**
 * monty_pstr - prints the string containedin a stack_t linked list
 * @stack: pointer to the top mode node of astack_t linked list
 * @line_number: current working line number of a monty bytecodes file
 *
 * Return: void
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp && tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
	(void)line_number;
}
