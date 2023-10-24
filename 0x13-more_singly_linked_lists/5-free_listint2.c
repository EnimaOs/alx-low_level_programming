#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *next_head;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next_head = (*head)->next;
		free(*head);
		*head = next_head;
	}
	head = NULL;

}
