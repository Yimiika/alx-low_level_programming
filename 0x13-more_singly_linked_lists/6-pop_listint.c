#include "lists.h"

/**
 * pop_listint - Function to delete and return data
 * @head: string structure
 * Return: Return to result
 */

int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
		return (0);
	result = (*head)->n;
	phead = *head;
	*head = (*head)->next;
	free(phead);
	return (result);
}
