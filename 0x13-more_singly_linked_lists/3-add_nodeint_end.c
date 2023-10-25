#include "lists.h"

/**
 * *add_nodeint_end - adds integer node at the end of the list
 * @head: pointer to te head pointer
 * that points to the first node
 * @n: new integer to be created
 * Return: New node at end of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_new_node;
	listint_t *tmp;	/*create a temporary struct to iterate through*/

	last_new_node = malloc(sizeof(listint_t));

	if (last_new_node == NULL)
		return (NULL);

	last_new_node->n = n;
	last_new_node->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = last_new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = last_new_node;
	}
	return (*head);
}
