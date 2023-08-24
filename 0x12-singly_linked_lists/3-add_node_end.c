#include"lists.h"
/**
 * add_node_end-Add node at the end of linked list
 * @head: Address of the head node
 * @str: string data
 * Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *ptr = *head;
    list_t *new = (list_t *) malloc(sizeof(list_t));
    int i = 0;
    int length = 0;

    if (new == NULL)
    {
        return (NULL);
    }
    new->str = strdup(str);
    while (str[i] != '\0')
    {
        i++;
        length++;
    }
    new->len = length;
    new->next = NULL;
    

    if (ptr == NULL)/*If there's no element in the list*/
    {
           *head = new;
        return (new);
    }
    while (ptr->next)/*Traverse the list till the end*/
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    return (new);
}