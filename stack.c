#include "monty.h"
#include <string.h>

/**
 * free_stack - frees a stack_t stack
 * @stack: pointer to the top or bottom of a stack_t
 *
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
/**
 * init_stack - initializes a stack_t stack with beginning
 * @stack pointer to uninitialized stack_t stack.
 *
 * Return: EXIT FAILURE- on failure, otherwise exit
 */
int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());
	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;
	
	*stack = s;
	return (EXIT_SUCCESS);
}
/**
 * check_mode - checks if a stack_t linked list id in stack or queue mode
 * @stack: pointer to the top or bottom of a stat_t linked list
 *
 * Return: STACK(0) in stack mode
 * 	QUEUE(1) IN queue mode, -2 otherwise
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack-> == QUEUE)
		return (QUEUE);
	return (2);
}
