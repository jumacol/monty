#include "monty.h"
/**
 * pop_error - prints poperror messages for empty stacks
 * @line_number: line number in script where error occured
 *
 * Return: EXIT FAILURE
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u:Can't pop an empty\n", line number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - prints error messages for empty stacks
 * @line_number: line number in monty bytecodes file where error occurred
 *
 * Return: EXIT_FAILURE
 */
int pint_error (unsigned int line_number)
{
	fprintf(stderr, "L%d: Can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * short_stack_error - prints monty math function error messages
 * @line_number: line number in monty bytecodes file where error occurred
 * @op: operation where the error occurred
 *
 * Return: EXIT_FAILURE
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}
/**
 * div_error - prints division error messages
 * @line_number: the line number
 *
 * Return: EXIT FAILURE
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: dividion by zero\n", line number);
	return (EXIT_FAILURE);
}
/**
 * pchar_error - prints pchar error messages for empty stacks
 * @line_number: line number
 * @message: corresponding error message to print
 *
 * Return: EXIT FAILURE
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}

