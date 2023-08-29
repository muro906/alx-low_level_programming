#include"lists.h"
/**
 * add_nodeint_end-Add node at end of list
 * @head:Address of the head node
 * @n: data to be added
 * Return: Addres to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;
	int i;

	ptr = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);/*If no node exists in the list*/
	}

	for (i = 0; ptr->next; i++)/*Iterate till last element*/
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (ptr);
}
