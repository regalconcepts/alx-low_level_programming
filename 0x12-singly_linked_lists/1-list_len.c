#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this returns the no. of elements in a linked list.
 * @h: this is the pointer to the list_t list.
 *
 * Return: no. of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
