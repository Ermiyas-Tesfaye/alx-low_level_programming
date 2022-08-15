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

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
