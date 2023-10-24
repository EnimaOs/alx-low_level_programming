#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to a head pointer
 * Return: the head nodeâ€™s data (n) or 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
