#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *init;
	int sus, nodes;

	init = *head;
	for (nodes = 0; init != NULL; nodes++)
		init = init->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	init = *head;
	sus = init->next->n - init->n;
	init->next->n = sus;
	*head = init->next;
	free(init);
}
