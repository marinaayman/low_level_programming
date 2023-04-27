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
  * add_node- adds a new node at the beginning of a list_t list.
  * @head: A pointer to the head of the list_t list.
  * @str: The string to be added to the list_t list.
  * Return: the address of the new element, or NULL if it failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{	free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
