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
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	if (newNode == NULL)
		return (NULL);
	return (newNode);
}
