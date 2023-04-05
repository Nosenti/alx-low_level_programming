#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: head node
 * Return: address of the node where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	listint_t *firstPtr = head;
	listint_t *secondPtr = head->next;

	while (firstPtr != NULL && secondPtr != NULL)
	{
		if (firstPtr == secondPtr)
		{
			return (firstPtr);
		}
	}
	return (NULL);
}
