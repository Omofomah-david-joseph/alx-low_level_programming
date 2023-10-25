#include "lists.h"

/**
 * sum_listint - sums all data of nodes in a linked list
 * @head: pointer to the first node
 * Return: Sum of all data in linked list
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
