#include "lists.h"

/**
 * get_nodeint_at_index - returne  node at a certain index
 * @head: node first in the linked list
 * @index: index the node to return
 *
 * Return: points to that node i am looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
