#include "lists.h"

listint_t *new_node(int n);

/**
  *insert_nodeint_at_index - inserts a new node at
  *given position
  *@head: points to first element of a list
  *@idx: index to the position of the new node
  *@n: the data of the new node created
  *Return: the address of the new node
  *or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *ftemp;
	listint_t *prv_temp;
	listint_t *fnode;

	ftemp = *head;
	if (head == NULL)
		return (NULL);
	fnode = new_node(n);
	if (fnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = fnode;
		return (fnode);
	}

	if (idx == 0)
		*head = fnode;
	for (l = 0; l < idx - 1 && ftemp != NULL && idx != 0; l++)
	{
		ftemp = ftemp->next;
	}
	if (ftemp == NULL)
		return (NULL);
	if (idx == 0)
	{
		fnode->next = ftemp;
	}
	else
	{
		prv_temp = ftemp->next;
		ftemp->next = fnode;
		fnode->next = prv_temp;
	}
	return (fnode);
}

/**
  *new_node - creates new node
  *@n: the data of the node
  *Return: pointer to the node
  */

listint_t *new_node(int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
