#include "lists.h"

/**
 * pop_listint - deletes head node and return its value
 * @head: head node
 * Return: value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *currNode = (*head);
	if (currNode == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *tmp = currNode;
		currNode = currNode->next;
		return (tmp->n);
	}
}
