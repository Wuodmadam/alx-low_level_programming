#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *random, *random2;

	random = malloc(sizeof(listint_t));
	if (random == NULL)
		return (NULL);

	random->n = n;
	random->next = NULL;

	if (*head == NULL)
	{
		*head = random;
		return (random);
	}

	random2 = *head;
	while (random2->next)
		random2 = random2->next;
	random2->next = random;
	return (random);
}
