#include"lists.h"
/**
 * listint_len-Returns number of elements in a list
 * @h: address of head node
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr = (listint_t *) h;
	int i = 0;
	size_t len = 0;

	if (ptr == NULL)
		return (len);
	for (; ptr != NULL; i++)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
