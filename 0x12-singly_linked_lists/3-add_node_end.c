#include "lists.h"

/**
 * *add_node_end - adds a node to the end of a list
 * @head: pointer of the head point that points
 * to the first node
 * @str: string studied
 * Return: Node at end of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/* a function that creates the node*/

/**
 * create_node - function creates a new node
 * @str: string studied
 * Return: New node
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len(str);
	return (new_node);
}

/* getting the length of the string*/

/**
 * len - gets the string's length
 * @str: string studied
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
