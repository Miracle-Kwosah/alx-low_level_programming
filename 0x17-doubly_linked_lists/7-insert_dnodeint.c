#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts the int index
 * @h: Pointer to the pointer to the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: Value of the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	if (!current)
		return (NULL);
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
