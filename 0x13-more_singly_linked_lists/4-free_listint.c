#include "lists.h"
/**
 * free_listint - Function to free nodes and list
 * @head: my struct
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
