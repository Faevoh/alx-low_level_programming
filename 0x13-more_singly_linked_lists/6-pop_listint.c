#include "lists.h"

/**
  *pop_listint - deletes the head node of listint_t linked list
  *@head: the pointer to the list
  *Return: returns the head node’s data (n)
  *and 0 if linked list is empty
  */

int pop_listint(listint_t **head)
{
	int j;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	j = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (j);
}
