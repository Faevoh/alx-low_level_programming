#include "lists.h"

/**
  * add_nodeint - adds a new node at the begining
  *of listint_t list
  *@head: head pointer
  *@n: integer  variable
  *Return: returs the address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (0);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (0);
}
