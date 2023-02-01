#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Function to print lenght of h
 * @h: pointer to nodes
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
