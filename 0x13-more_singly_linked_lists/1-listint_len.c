#include "lists.h"
/**
  * listint_len- returns the number of elements in
  *              a linked listint_t list.
  * @h: listint_t list.
  * Return: number of elements.
  */

size_t listint_len(const listint_t *h)
{
	size_t len_list = 0;

	for (; h != NULL; h = h->next)
		len_list++;

	return (len_list);
}
