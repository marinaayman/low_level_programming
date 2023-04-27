#include "lists.h"
/**
  * print_list- prints all the elements of a list_t list.
  * @h: pointer of type struct list_t.
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;
	const list_t *curr;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		printf("[%d] %s\n", curr->len,
		      (curr->str == NULL ? "[0] (nil)" : curr->str));
		nodes_num++;
	}

	return (nodes_num);
}
