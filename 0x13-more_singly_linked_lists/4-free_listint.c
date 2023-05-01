#include "lists.h"

/**
 * free_listint - freed  linked list
 * @head: listint_t list to be freed in here
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
