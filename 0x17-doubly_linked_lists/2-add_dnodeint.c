#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add the int file name
 * dlistint_t - in the file node
 *@head: head node point
 *@n: number of int file
 * Return: 0 when it is success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
