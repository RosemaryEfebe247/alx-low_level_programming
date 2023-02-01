#include "lists.h"
/**
 * free_listint - Function that frees a list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
