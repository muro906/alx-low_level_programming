#include"lists.h"
/**
 * add_node-Adds node at the beginning of the linked list
 * @head:The address of the head node
 * @str: The string in the data segment
 * Return: pointer to the new head node
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *ptr = (list_t *) malloc(sizeof(list_t));
    int i = 0;
    unsigned int length = 0;

    if (ptr == NULL)
        return (NULL);

    if (*head == NULL)
    {
        ptr->str = strdup(str);
        for (i = 0; str[i] != '\0'; i++)
        {
            length++;
        }
        ptr->len = length;
        ptr->next = NULL;
    }
    else
    {
        list_t *temp = *head;
        ptr->str = strdup(str);
        for (i = 0; str[i] != '\0'; i++)
        {
            length++;
        }
        ptr->len = length;
        ptr->next = temp;
        *head = ptr;
    }
    return (*head);
}