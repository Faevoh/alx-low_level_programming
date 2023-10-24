#include "lists.h"

/**
  *listint_len - checks elements in listint_t list
  *@h: head pointer
  *Return: numbers of element in list
  */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
