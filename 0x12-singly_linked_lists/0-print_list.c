#include"lists.h"
/**
 * print_list-Print the elements in a node
 * @h: address of the head node
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *ptr = h;
	size_t len = 0;

	if (ptr == NULL)
		return (0);
	else
	{
		while (ptr != NULL)
		{
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
			{
				printf("[%u] %s\n", ptr->len, ptr->str);
				ptr = ptr->next;
			}
			len++;
		}
	}
	return (len);
}
