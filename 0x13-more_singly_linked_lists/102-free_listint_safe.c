#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *tmp;
    int flag;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        size++;
        flag = 0;
        if (current < current->next)
        {
            tmp = current->next;
            current->next = NULL;
            free(current);
            current = tmp;
            flag = 1;
        }
        else if (*h < current->next)
        {
            free(*h);
            *h = NULL;
            return (size);
        }
        else
        {
            tmp = current->next;
            free(current);
            current = tmp;
            flag = 1;
        }

        if (flag == 0)
            break;
    }

    *h = NULL;

    return (size);
}
