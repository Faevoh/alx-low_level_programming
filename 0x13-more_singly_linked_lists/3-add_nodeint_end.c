#include "lists.h"
/**
  *add_nodeint_end - adds new node at the end
  *of listint_t
  *@head: the pointer pointing to the
  *head of the list
  *@n: variable placholder
  *Return: the nomber of nodes
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *initial;
	listint_t *ftemp;

	(void)ftemp;

	initial = malloc(sizeof(listint_t));
	if (initial == NULL)
		return (NULL);

	initial->n = n;
	initial->next = NULL;
	ftemp = *head;
	if (*head == NULL)
	{
		*head = initial;
	}
	else
	{
		while (ftemp->next != NULL)
		{
			ftemp = ftemp->next;
		}
		ftemp->next = initial;
	}
	return (*head);
}
