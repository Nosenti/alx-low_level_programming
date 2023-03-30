#include "lists.h"

/**
 * print_list - prints elements of a linkedlist
 * @h: head of a linkedlist
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[%i] (nil)\n", h->len);
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}

