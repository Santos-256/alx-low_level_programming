#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 If the list is not looped
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *new, *old;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	new = head->next;
	old = (head->next)->next;
	while (old)
	{
		if (new == old)
		{
			new = head;
			while (new != old)
			{
				i++;
				new = new->next;
				old = old->next;
			}
			new = new->next;
			while (new != old)
			{
				i++;
				new = new->next;
			}
			return (i);
		}
		new = new->next;
		old = (old->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;

	i = looped_listint_len(head);
	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}
