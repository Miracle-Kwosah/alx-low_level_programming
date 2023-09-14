#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  add_dnodeint_end - add the int end file name
 * dlistint_t - in the file node
 *@head: head node point
 *@n: number of int file
 * Return: 0 when it is success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
