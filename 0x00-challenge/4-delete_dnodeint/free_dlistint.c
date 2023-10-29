#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - This function frees a list
 *
 * @head: This is the pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
