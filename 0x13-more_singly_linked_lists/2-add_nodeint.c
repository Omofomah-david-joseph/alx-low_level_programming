#include "lists.h"

/**
 * *add_nodeint - adds integer nodes at the beginner of a list
 * @head: pointer to the head pointer
 * that then points to the first node
 * @n: new integer to be added
 * Return: a new node at beginning of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	if (*head == NULL)
		n_node->next = NULL;
	else
		n_node->next = *head;
	n_node->n = n;
	*head = n_node;
	return (*head);
}
