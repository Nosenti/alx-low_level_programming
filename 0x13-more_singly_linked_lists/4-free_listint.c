#include "lists.h"

/**
 * free_listint - frees the list
 * @head: head node
 * Return: void
 */

void free_listing(listint_t *head)
{
	listint_t *currNode;
	listint_t *next;

	currNode = head;

	if (currNode == NULL)
	{
		return;
	}

	while (currNode != NULL)
	{
		next = currNode->next;
		free(currNode);
		currNode = next;
	}
}
