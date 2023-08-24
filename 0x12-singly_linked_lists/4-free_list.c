#include"lists.h"
/**
 * free_list- Frees a linked list
 * @head: Address of the head node
*/
void free_list(list_t *head)
{
    list_t *ptr = head;
    list_t *temp = NULL;

    while (!ptr)
    {
        temp = ptr->next;
        free(ptr->str);
        free(ptr);
        ptr = temp;
    }
}