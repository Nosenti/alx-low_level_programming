#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head node
 * @n: value of a node
 * Return: address of teh new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
