#include "lists.h"

/**
  *delete_nodeint_at_index - deletes a node of a list
  *a particular index
  *@head: pointer to the beginning of the list
  *@index: index of the node to be freed
  *Return: 1 if successful and -1 if not
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp;
	listint_t *node;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (n = 0; n < index - 1 && temp != NULL && index != 0; n++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
