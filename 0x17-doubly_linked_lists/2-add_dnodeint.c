#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element taken as parameter
 * Return: the address of the new element else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	current = *head;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	newnode->next = current;

	if (current != NULL)
		current->prev = newnode;

	*head = newnode;

	return (newnode);
}
