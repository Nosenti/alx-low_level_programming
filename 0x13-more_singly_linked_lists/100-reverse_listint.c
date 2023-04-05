#include "lists.h"

/**
 * reverse_listint - reverse a linkedlist
 * @head: head node
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
