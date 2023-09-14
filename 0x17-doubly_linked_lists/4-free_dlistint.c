#include "lists.h"

/**
 * free_dlistint- free the int end file name
 * dlistint_t - in the file node
 *@head: head node point
 *
 * Return: 0 when it is success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
