#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *heads;
	(void)counter;

	heads = *head;
	if (heads == NULL)
		return;
	while (heads)
	{
		printf("%d\n", heads->n);
		heads = heads->next;
	}
}
