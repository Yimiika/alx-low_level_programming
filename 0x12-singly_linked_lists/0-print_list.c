#include "lists.h"

/**
 * print_list - Prints all the elements
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const struct list_s *h) 
{
  size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
  return (count);
}
