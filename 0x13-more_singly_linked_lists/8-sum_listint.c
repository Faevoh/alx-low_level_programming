#include "lists.h"

/**
  *sum_listint - sums up data in a linked list
  *@head: pointer to the list
  *Return: returns the sum
  */

int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
