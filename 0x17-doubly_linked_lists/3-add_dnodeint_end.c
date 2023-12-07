#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a doubly linked list (dlistint_t)
 *
 * @head: head of the list
 * @n: value of the element taken as parameter
 * Return: the address of the new element else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	current = *head;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = current;

	return (newnode);
}
