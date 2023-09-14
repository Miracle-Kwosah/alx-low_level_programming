#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the int file name
 * dlistint_t - in the file node
 *
 *@head: head node point
 *@index: index of int file
 * Return: 0 when it is success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;

	while (head != NULL)
	{
		if (currentIndex == index)
		{
			return (head);
		}
		head = head->next;
		currentIndex++;
	}
	return (NULL);
}
