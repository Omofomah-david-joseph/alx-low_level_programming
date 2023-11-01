#include "lists.h"

/**
 * free_list - frees elements in a list
 * @head: pointer to the first node
 * Return: a free element
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}			}
