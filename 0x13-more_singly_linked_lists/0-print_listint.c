#include"lists.h"
/**
 * print_listint-Print the elements of the linked list
 * @h: address of the head node
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr = (listint_t *) h;
	size_t len = 0;
	int i;

	if (ptr == NULL)
		return (len);
	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		len++;
		ptr = ptr->next;
	}
	return (len);
}
