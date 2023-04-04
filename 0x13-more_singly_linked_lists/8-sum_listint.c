#include "lists.h"

/**
 * sum_listint - returns the sum of elements in a LinkedList
 * @head: head node
 * Return: sum of elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currNode = head;

	while (currNode != NULL)
	{
		sum = sum + currNode->n;
		currNode = currNode->next;
	}
	return (sum);
}
