#include "lists.h"

/**
 * pop_listint - delects the head node and returns the head node data
 * @head: point of the head pointer
 * that points to the first node
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
