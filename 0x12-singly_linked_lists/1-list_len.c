#include"lists.h"
/**
 * list_len-Returns number of nodes in the linked list
 * @h: Address of the head node
 * Return: The number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	list_t *ptr = (list_t*) h;
	size_t num = 0;

	/**if (ptr == NULL)
		return (0);
		*/
	while (ptr)
	{
		ptr = ptr->next;
		num++;
	}
	return (num);
}
