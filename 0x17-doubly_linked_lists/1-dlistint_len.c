#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - in the len
 * dlistint_t - in the file
 *@h: node points
 * Return: 0 when it is success
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
