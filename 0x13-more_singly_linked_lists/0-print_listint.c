#include "lists.h"

/**
  *print_listint - prints all elements of a listint_t list
  *@h: the head pointer to the list
  *Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
