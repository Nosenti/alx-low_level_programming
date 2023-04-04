#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a position
 * @head: head node
 * @idx: position that the node will be added to
 * @n: data of the node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currNode;
	listint_t *prevNode = NULL;
	unsigned int count = 0;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	currNode = *head;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (currNode != NULL)
	{
		if (count == idx)
		{
			newNode->next = currNode;
			prevNode->next = newNode;
			return (newNode);
		}
		prevNode = currNode;
		currNode = currNode->next;
		count++;
	}
	if (count == idx)
	{
		prevNode->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
