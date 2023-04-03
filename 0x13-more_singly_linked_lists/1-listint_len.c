#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *xy;
	unsigned int odhis = 0;

	xy = h;
	while (xy)
	{
		odhis++;
		xy = xy->next;
	}
	return (odhis);
}
