#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: Pointer to the head of the list.
 * @n: new node
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
{
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}
