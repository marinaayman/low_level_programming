#include "lists.h"
/**
  * _strlen- returns the length of string.
  * @list: pointer to struct.
  * Return: length.
  */
unsigned int _strlen(list_t *list)
{
	unsigned int length = 0;

	while (list->str[length] != '\0')
		length++;
	return (length);
}

/**
  * find_last_node- return a pointer of last node.
  * @head: pointer to the head of the list_t list.
  * Return: pointer.
  */
list_t *find_last_node(list_t *head)
{
	for (; head->next != NULL; head = head->next)
		;
	return (head);
}

/**
  * add_node_end- adds a new node at the end of a list_t list.
  * @head: A pointer to the head of the list_t list.
  * @str: The string to be added to the list_t list.
  * Return: the address of the new element, or NULL if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr_node = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		curr_node = find_last_node(curr_node);
		curr_node->next = new_node;
	}
	return (*head);
}
