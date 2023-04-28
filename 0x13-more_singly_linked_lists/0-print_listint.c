#include "lists.h"
/**
  * print_listint- prints all the elements of a listint_t list.
  * @h: pointer of type struct listint_t.
  * Return: number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes_num++;
	}
	return (nodes_num);
}
