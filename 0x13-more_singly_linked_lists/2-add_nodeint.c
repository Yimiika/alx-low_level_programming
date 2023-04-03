#include "lists.h"
/**
 * add_nodeint - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @n: int assigned to the node
 * Return: the pointer to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
