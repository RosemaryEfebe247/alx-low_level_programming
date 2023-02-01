#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function to print lenght of linkedlist
 * @h: pointer to listint
 * Return: list nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
