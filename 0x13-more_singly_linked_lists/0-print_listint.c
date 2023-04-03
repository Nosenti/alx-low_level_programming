#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of a linkedlist
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = head->next;
	}
	return (count);
}
