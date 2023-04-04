#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *currNode;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	currNode = *head;

	while (currNode != NULL)
	{
		next = currNode->next;
		free(currNode);
		currNode = next;
	}
	*head = NULL;
}
