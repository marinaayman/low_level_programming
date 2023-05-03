#include "lists.h"

/**
  * loop_head- get the head of the loop.
  * @fast: a pointer.
  * @head: a pointer.
  * Return: pointer.
  */

const listint_t *loop_head(const listint_t *fast, const listint_t *head)
{
	const listint_t *slow = head;

	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return (fast);
}

/**
  * loop_len- get the length of the loop.
  * @fast: a pointer.
  * @slow: a pointer.
  * Return: length.
  */
size_t loop_len(const listint_t *fast, const listint_t *slow)
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
  * detect_loop- checks if there is a loop.
  * @head: a pointer of type struct listint_t.
  * Return: pointer if loop.
  *         null if not loop.
  */

const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

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
  * print_listint_safe- prints a listint_t linked list.
  * @head: A pointer to the pointer to the head of the listint_t list.
  * Return: the number of nodes in the list.
  *         error 98, if failure.
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_num = 0, len = 0, i = 0;
	const listint_t *ptr = NULL, *loophead = NULL;

	if (head == NULL)
		return (NULL);
	ptr = detect_loop(head);
	if (ptr != NULL)
	{
		len = loop_len(ptr, ptr);
		loophead = loop_head(ptr, head);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes_num++;
		if (head == loophead && loophead != NULL)
		{
			for (i = 0; i < len - 1; i++)
			{
				head = head->next;
				printf("[%p] %d\n", (void *)head, head->n);
				nodes_num++;
			}
			printf("-> [%p] %d\n", (void *)loophead, loophead->n);
			break;
		}
		head = head->next;
	}
	return (nodes_num);
}
