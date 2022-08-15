#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - a fun.. that adds a new node at the beginning of a list
 * @head: address of pointer head
 * @n: value
 * Return: the address of a new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
