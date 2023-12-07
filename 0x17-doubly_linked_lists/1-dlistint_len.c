#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list(dlistint_t)
 *
 * @h: head of the list as a parameter
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount;

	nodecount = 0;

	if (h == NULL)
		return (nodecount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
