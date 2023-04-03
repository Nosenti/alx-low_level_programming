#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head: head node
 * @n: value
 * Return: returns a new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t currNode;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if ((*head) == NULL)
	{
		(*head) = newNode;
	}
	else
	{
		currNode = *head;
		while (currNode->next != NULL)
		{
			currNode = currNode->next;
		}
		currNode->next = newNode;
	}
	return (newNode);
}
