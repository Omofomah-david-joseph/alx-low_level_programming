#include "lists.h"

/**
 * free_listint - free a node in a list
 * @head: pointer to the first node on list
 * Return: Always 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp; /* create a temporary struct to iterate through*/

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
