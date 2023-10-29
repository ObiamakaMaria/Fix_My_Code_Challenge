#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - This function prints a doubly linkedlist of integers
 *
 * @h: This is a  pointer to the first element of a list
 *
 * Return: This is the  number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
