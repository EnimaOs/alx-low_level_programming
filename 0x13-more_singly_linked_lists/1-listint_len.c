#include "lists.h"
/**
 * listint_len - print list of ints
 * @h: refrance of list_t "linked list of ints"
 * Return: list size
 */
size_t listint_len(const listint_t *h)
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
