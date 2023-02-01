#include "lists.h"
/**
 * add_nodeint_end - Add node at the end
 * @head: A pointer to the address of the head node
 * @n: the integer
 * Return: the pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
