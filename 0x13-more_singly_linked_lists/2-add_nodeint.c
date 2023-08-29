#include"lists.h"
/**
 * add_nodeint-Add node at the beginning
 * @head: Address of the head nodde
 * @n: The integer data
 * Return: Pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
