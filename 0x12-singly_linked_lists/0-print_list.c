#include "main.h"

/**
 * print_list - prints elements of a linkedlist
 * @h: head of a linkedlist
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%zu] %s\n", len, h->str);
		}
		else
		{
			printf("[%zu] (nil)\n", len);
		}
		len++;
		h = h->next;
	}
	return (len);
}

