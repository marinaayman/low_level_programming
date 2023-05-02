#include "lists.h"

/**
  * find_listint_loop- checks if there is a loop.
  * @head: a pointer of type struct listint_t.
  * Return: pointer if loop.
  *         null if not loop.
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;

			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
