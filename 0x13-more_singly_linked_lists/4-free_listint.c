#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 * temp: Victor
 */
void free_listint(listint_t *head)
{
	listint_t *Victor;

	while (head)
	{
	Victor = head;
	head = head->next;
	free(Victor);
	}
	free(head);
}
