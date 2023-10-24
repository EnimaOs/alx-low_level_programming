#include "lists.h"
/**
 * add_nodeint - creat a new node at the beginning of a listint_t list.
 * @head: pointer to a head pointer
 * @n: number
 * Return: list size
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = (*head);
	*head = l;
	return (l);
}
