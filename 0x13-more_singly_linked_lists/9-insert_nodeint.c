#include "lists.h"

/*** first create the new node ***/


/**
 * *make_new_node - creates the new node
 * @n: new integer to be created
 * Return: A new node placed at a desired position
 */
listint_t *make_new_node(int n)
{
	listint_t *formed_node;

	formed_node = malloc(sizeof(listint_t));

	if (formed_node == NULL)
		return (NULL);
	formed_node->n = n;
	formed_node->next = NULL;

	return (formed_node);
}

/**** then the function to insert new node to desired position***/

/**
 * **insert_nodeint_at_index - inserts a newly formed node
 * at a defined position
 * @head: pointer of the head pointer that
 * points to the first node
 * @idx: index in list where new node is added
 * @n: new integer to be created
 * Return: A new node placed at a desired position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int abc;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *formed_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	formed_node = make_new_node(n);

	if (formed_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = formed_node;
		return (formed_node);
	}
	if (idx == 0)
	{
		*head = formed_node;
	}

	for (abc = 0; abc < idx - 1 && tmp != NULL && idx != 0; abc++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
	{
		formed_node->next = tmp;
	}
	else
	{
		tmp_old = tmp->next;
		tmp->next = formed_node;
		formed_node->next = tmp_old;
	}
	return (formed_node);
}
