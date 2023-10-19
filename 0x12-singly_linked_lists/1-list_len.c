#include "lists.h"
/**
 * list_len - print list of strings
 * @h: refrance of list_t "linked list of strings"
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	int size;

	size = 0;
	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
