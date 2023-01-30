#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_list - Function to print the list of a node
 * @h: The pointer to the nodes
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
