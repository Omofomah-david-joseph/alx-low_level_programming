#include "lists.h"

/**
 * free_listint2 - frees series of nodes in a linked list
 * and sets the head to NULL
 * @head: pointer of the head pointer
 * that points to the first node
 * Return: Always 0 (success)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp; /* create a temporary struct that iterate through*/

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
