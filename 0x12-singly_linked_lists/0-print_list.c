#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Const pointer of structure list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0, j = 0, n = 0;
	char *nil = "[0] (nil)\n";

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			while (nil[j])
				_putchar(nil[j++]);
		}
		else
		{
			_putchar('[');
			printnum(n->len);
			_putchar(']');
			_putchar(' ');
			printstr(h->str);
			_putchar('\n');
		}
		h = h->next;
		i++;
	}

	return (i);
}
