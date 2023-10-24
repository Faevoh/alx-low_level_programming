#include "lists.h"

/**
  *get_nodeint_at_index - gets the nth node at index
  *@head: pointer to first list element
  *@index: node position to retrieve
  *Return: the nth node of the linked list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
