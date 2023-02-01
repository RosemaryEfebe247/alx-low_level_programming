#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Add new node at the beginning
 * @head: the beginning node
 * @n: the node integer
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	if (new == NULL)
		return (NULL);

	*head = new;
	return (new);
}
