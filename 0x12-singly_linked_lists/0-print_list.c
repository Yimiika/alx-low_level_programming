#include "lists.h"

/**
 * print_list - Prints all the elements
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const struct list_s *h) 
{
  size_t count;

  count = 0;
  while (h != NULL)
  {
	printf("[%d] %s\n", count, h->str);
    count++;
    h = h->next;
  }
  return (count);
}
