#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elementes
 * @h: head pointer for liked list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	listint_t *temp = NULL;

	if (h == NULL)
		return (i);
	temp = h->next;
	printf("%d\n", h->n);
	i++;
	while (temp != NULL)
	{
		printf("%d\n", h->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
