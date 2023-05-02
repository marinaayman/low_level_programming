#include "lists.h"

/**
  * cycle_head- get the head of the loop.
  * @fast: a pointer.
  * @head: a pointer.
  * Return: pointer.
  */

listint_t *cycle_head(listint_t *fast, listint_t *head)
{
	listint_t *slow = head;

	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return (fast);
}

/**
  * cycle_len- get the length of the loop.
  * @fast: a pointer.
  * @slow: a pointer.
  * Return: length.
  */
size_t cycle_len(listint_t *fast, listint_t *slow)
{
	size_t len = 1;

	fast = fast->next;
	while (fast != slow)
	{
		fast = fast->next;
		len++;
	}
	return (len);
}

/**
  * detect_cycle- checks if there is a loop.
  * @head: a pointer of type struct listint_t.
  * Return: pointer if loop.
  *         null if not loop.
  */

listint_t *detect_cycle(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (fast);
		}
	}
	return (NULL);
}
/**
  * free_listint_safe- prints a listint_t linked list.
  * @h: A pointer to the pointer to the head of the listint_t list.
  * Return: the number of nodes in the list.
  *
  */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes_num = 0, len = 0, i = 0;
	listint_t *ptr = NULL, *loophead = NULL, *tmp = *h;

	if (h == NULL || *h == NULL)
		return (0);
	ptr = detect_cycle(*h);
	if (ptr != NULL)
	{
		len = cycle_len(ptr, ptr);
		loophead = cycle_head(ptr, *h);
	}
	while (tmp != NULL)
	{
		if (tmp == loophead)
		{
			for (i = 0; i < len - 1; i++)
			{
				*h = (*h)->next;
				free(tmp);
				tmp = *h;
				nodes_num++;
			}
			*h = NULL;
			break;
		}
		*h = (*h)->next;
		free(tmp);
		tmp = *h;
		nodes_num++;
	}
	h = NULL;
	return (nodes_num);
}
