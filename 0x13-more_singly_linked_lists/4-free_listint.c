#include"lists.h"
/**
 * free_listint-Free a linked list
 * @head: Address of the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	int i;

	if (head == NULL)
		return;
	for (i = 0; head->next; i++)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
		
