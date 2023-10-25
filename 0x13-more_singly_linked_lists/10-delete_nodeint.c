#include "lists.h"

/**
 * delte_nodeint_at_index - 
 * @head: pointer of the head pointer that points
 * to the first node
 * @index: node index to be deleted
 * Return: a deleted node from the specified index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int dc;
	listint_t *tmp;
	listint_t *node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	for (dc = 0; dc < index - 1 && tmp != NULL && index != 0; dc++)
		tmp = tmp->next;

	if (tmp ==NULL)
		return (-1);

	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next;
		free(tmp->next);
		tmp->next = node;
	}
	return(1);
}
