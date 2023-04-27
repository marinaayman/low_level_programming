#include "lists.h"
/**
  * list_len- returns the number of elements in
  *           a linked list_t list.
  * @h: list_t list.
  * Return: number of elements.
  */

size_t list_len(const list_t *h)
{
	size_t len_list = 0;

	for (; h != NULL; h = h->next)
		len_list++;

	return (len_list);
}
