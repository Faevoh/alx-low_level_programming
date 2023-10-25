#include "lists.h"

void free_listp(listp_t **head);

/**
  *print_listint_safe - prints a linked list
  *@head: pointer to the list
  *Return: number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;

	}
	free_listp(&hptr);
	return (node);
}

/**
  * free_listp - free a linked list
  *@head: head of a list
  *Return: 0
  */

void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
