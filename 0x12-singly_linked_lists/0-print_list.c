#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - Function to print the list of a node
 * @h: The pointer to the nodes
 * Return: Nodes
 */
size_t print_list(const list_t *h)
{
	size_t increase = 0;

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
		increase++;
		h = h->next;
	}
	return (increase);
}
