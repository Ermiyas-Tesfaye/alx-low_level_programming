#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_int - a fun.. that print integer value
 * @n: value to print
 *
void print_int(int n)
{
	if (n > 9)
		print_int(n / 10);
	_putchar(n % 10 + '0');
}
*/
/**
 * print_listint_safe - a fun.. that prints a linked list
 * @head: a pointer to the first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (!head)
		exit(98);
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
