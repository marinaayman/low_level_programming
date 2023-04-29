#include "lists.h"

/**
  * get_nodeint_at_index- returns the nth node of a listint_t linked list.
  * @head: A pointer the head of the listint_t list.
  * @index: the index of the node, starting at 0
  * Return: if the node does not exist, return NULL.
  *          returns the nth node.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; head != NULL && index--; head = head->next)
		;
	if (head == NULL)
		return (NULL);
	return (head);
}
