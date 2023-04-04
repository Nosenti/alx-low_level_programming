#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head node
 * @index: index of node to be deleted
 * Return: 1(success) or -1(fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currNode;
	listint_t *prevNode = NULL;
	unsigned int count = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	currNode = *head;
	if (index == 0)
	{
		*head = currNode->next;
		free(currNode);
		return (1);
	}
	while (currNode != NULL)
	{
		if (count == index)
		{
			prevNode->next = currNode->next;
			free(currNode);
			return (1);
		}
		prevNode = currNode;
		currNode = currNode->next;
		count++;
	}
	return (-1);
}
