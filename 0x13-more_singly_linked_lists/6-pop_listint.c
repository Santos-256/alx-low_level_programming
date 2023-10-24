#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the linked list is empty return
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	start = (*head)->next;
	free(*head);
	*head = start;

	return (number);
}
