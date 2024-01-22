#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *heads;
	(void)counter;

	heads = *head;
	while (heads)
	{
		if (heads->n > 127 || heads->n <= 0)
		{
			break;
		}
		printf("%c", heads->n);
		heads = heads->next;
	}
	printf("\n");
}
