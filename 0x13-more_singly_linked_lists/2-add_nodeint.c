#include "lists.h"

/**
 * add_nodeint - adds a new node which begins a  linked list
 * @head: points to  first node in the list
 * @n: data to insert in that new node
 *
 * Return: points to the new node, or NULL when it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
