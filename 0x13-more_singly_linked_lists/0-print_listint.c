#include "lists.h"
/**
 * print_listint - print list of ints
 * @h: reference of list_t "linked list of int "
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	int size;

	size = 0;
	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
