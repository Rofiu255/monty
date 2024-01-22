#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int h_len = 0, init;

	h = *head;
	while (h)
	{
		h = h->next;
		h_len++;
	}
	if (h_len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	init = h->next->n * h->n;
	h->next->n = init;
	*head = h->next;
	free(h);
}
