#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_dlistint-print elements in double linked list
 * @h: head of linked list
 * return: number of nodes in the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;
    dlistint_t* node = (dlistint_t*)h;

    if(node == NULL)
        return n;
    while(node->next != NULL)
    {
        printf("%d\n", node->n);
        node = node->next;
        n++;
    }
    printf("%d\n", node->n);
    n++;
    return n;

}