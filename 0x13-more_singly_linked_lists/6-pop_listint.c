#include "lists.h"

/**
 * pop_listint - deletes head node and return its value
 * @head: head node
 * Return: value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *currNode;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		currNode = *head;
		data = currNode->n;
		*head = currNode->next;
		free(currNode);

		return (data);
	}
}
