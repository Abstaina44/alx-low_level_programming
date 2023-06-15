#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: given index
 * @n: new node's value
 *
 * Return: address of new node (Success) | NULL (Failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!h || !(*h))
		return (NULL);

	tmp = *h;
	for (i = 0; tmp && i < (idx - 1); i++)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (new_node);
}
