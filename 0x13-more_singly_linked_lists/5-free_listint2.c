#include "lists.h"

/**
  *free_listint2 - frees a listint_t list
  *@head: head pointer
  *Return: returns freed list while
  *setting head to null
  */

void free_listint2(listint_t **head)
{
	listint_t *ftemp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		ftemp = (*head)->next;
		free(*head);
		*head = ftemp;
	}
	free(*head);
	*head = NULL;
}
