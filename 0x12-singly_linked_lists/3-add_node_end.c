#include "lists.h"

/**
 * len - Calculates the length of a string.
 * @str: string
 * Return: The length of the string
 */

int len(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node_end - Function that adds a new node at the end
 *
 * @head: pointer to first
 * @str: string
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
