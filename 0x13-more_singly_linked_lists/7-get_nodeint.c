#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: NULL if the node does not exis
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *new = head;

	while (new && k < index)
	{
		new = new->next;
		k++;
	}
	return (new ? new : NULL);
}
