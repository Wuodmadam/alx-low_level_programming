#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *xy;
	unsigned int odhis = 0;

	xy = h;
	while (xy)
	{
		printf("%d\n", xy->n);
		odhis++;
		xy = xy->next;
	}
	return (odhis);
}
