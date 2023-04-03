#include "lists.h"

/**
 * get_nodeint_at_index - Function to return to nth node
 * @head: my structure
 * @index: my index
 * Return: return the result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
