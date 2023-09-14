#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - add the int file name
 * dlistint_t - in the file node
 *@head: head node point
 *
 * Return: 0 when it is success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
