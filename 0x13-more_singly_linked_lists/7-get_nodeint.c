#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head node
 * @index: index of a node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *currNode = head;

	while(currentNode != NULL)
	{
		if (count == index)
		{
			return (currentNode);
		}
		currentNode = currentNode->next;
		count++;
	}
	return (NULL);
}
