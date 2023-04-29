#include "lists.h"

/**
  * find_last_node- return a pointer of last node.
  * @head: pointer to the head of the listint_t list.
  * Return: pointer.
  */
listint_t *find_last_node(listint_t *head)
{
	for (; head->next != NULL; head = head->next)
		;
	return (head);
}

/**
  * add_node_end- adds a new node at the end of a listint_t list.
  * @head: A pointer to the head of the listint_t list.
  * @n: The number to be added to the listint_t list.
  * Return: the address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *curr_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
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
