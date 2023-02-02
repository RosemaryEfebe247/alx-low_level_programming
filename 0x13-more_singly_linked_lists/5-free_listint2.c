#include "lists.h"
/**
 * free_listint2 - Function to free head and set it to null
 * @head: pointer to a head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
