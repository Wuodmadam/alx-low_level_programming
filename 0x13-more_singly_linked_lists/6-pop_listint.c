#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *xy;
	int my_data;

	if (*head == NULL)
		return (0);

	xy = *head;
	*head = xy->next;
	my_data = xy->n;
	free(xy);
	return (my_data);
}
