#include "lists.h"

/**
 * print_list - prints elements of a linkedlist
 * @h: head of a linkedlist
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}

