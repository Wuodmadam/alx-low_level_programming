#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *xy, *xy2;

	xy = head;
	while (xy != NULL)
	{
		xy2 = xy->next;
		free(xy);
		xy = xy2;
	}
}
