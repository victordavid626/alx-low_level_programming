#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in the list
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 * nodes: Victor
 */
size_t listint_len(const listint_t *h)
{
	size_t Victor = 0;

	while (h)
	{
	h = h->next;
		Victor++;
	}
	return (Victor);
}
