#include "lists.h"

/**
 * list_len - A function that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 * Victor = nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int Victor = 0;

	while (h)
	{
		Victor++;
	h = h->next;
	}
	return (Victor);
}
