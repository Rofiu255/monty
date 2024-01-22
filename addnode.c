#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *newNode, *aux;

	aux = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
