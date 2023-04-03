#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: single linked list
 *
 * Return: the response
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		listint_t *next;

		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
