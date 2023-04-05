#include "lists.h"

/**
 * reverse_listint - reverse a linkedlist
 * @head: head node
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *currNode = *head;
	listint_t *nextNode;

	while (currNode != NULL)
	{
		nextNode = currNode->next;
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = nextNode;
	}
	*head = prevNode;
	return (*head);
}
