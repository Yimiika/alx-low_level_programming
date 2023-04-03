#include "lists.h"
/**
 * free_listint2 - Free nodes, list and set head to null
 * @head: my struct
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		free(tmp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}
