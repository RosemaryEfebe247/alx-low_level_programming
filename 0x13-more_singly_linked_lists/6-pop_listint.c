#include "lists.h"
/**
 * pop_listint - Delete note at the beginning
 * @head: Pointer to the address of the head node
 * Return: the node data
 */
int pop_listint(listint_t **head)
{
	int value;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	*head = (*head)->next;
	free(*head);

	return (value);
}
