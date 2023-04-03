#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node 
  * @head: list 
  * @idx: index of the list
  * @n: the integer
  * Return: the address of the new node
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (; count < idx - 1; count++)
	{
		current_node = current_node->next;
		if (current_node == NULL && idx - count > 0)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
