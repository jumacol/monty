#include "monty.h"
/**
 * usage_error - prints usage error messages
 *
 * Return: (EXIT_FAILURE)
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
/**
 * malloc_error - prints malloc error messages
 *
 * Return: (EXIT_FAILURE);
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
/**
 * f_open_error - prints file opening error messages
 * @filename: name of file failed to open
 *
 * Return: (EXIT_FAILURE)
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 * unknown_op_error - pronts unkown instruction error messages
 * @opcode: Opcode where error occured
 * @line_number: line number in monty bytescode file where erroroccured
 *
 * Return: (EXIT_FAILURE) always
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (EXIT_FAILURE);
}
/**
 * no_int_error - print invalid monty_push argument error messages
 * @line_number: line number in monty bytecodes file where error occurred
 *
 * Return: (EXIT_FAILURE)
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
