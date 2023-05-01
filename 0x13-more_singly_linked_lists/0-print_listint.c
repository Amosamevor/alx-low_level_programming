#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: head of a list.
 *
 * Return: nnodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
