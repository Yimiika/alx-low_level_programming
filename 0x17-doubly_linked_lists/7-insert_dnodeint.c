#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    if (idx == 0)
    {
        return insert_at_beginning(h, new_node);
    }

    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node);
            return NULL;
        }
        current = current->next;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    return insert_in_middle_or_end(current, new_node);
}

/**
 * insert_at_beginning - Inserts a new node at the beginning of the list.
 * @h: Pointer to a pointer to the head of the list.
 * @new_node: Pointer to the new node to be inserted.
 * Return: Address of the new node.
 */
dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
    new_node->next = *h;
    new_node->prev = NULL;
    if (*h != NULL)
        (*h)->prev = new_node;
    *h = new_node;
    return new_node;
}

/**
 * insert_in_middle_or_end - Inserts a new node in the middle or at the end of the list.
 * @current: Pointer to the node before the insertion point.
 * @new_node: Pointer to the new node to be inserted.
 * Return: Address of the new node.
 */
dlistint_t *insert_in_middle_or_end(dlistint_t *current, dlistint_t *new_node)
{
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;
    return new_node;
}
