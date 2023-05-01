#include "lists.h"

/**
 * pop_listint - deleted the head node in the  linked list
 * @head: points to the first element in the linked list
 *
 * Return:  data inside the elements that was deleted,
 * or 0 if the list is null
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
