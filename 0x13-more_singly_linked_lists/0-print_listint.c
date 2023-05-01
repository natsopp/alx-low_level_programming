#include "lists.h"


/**
 * print_listint - prints a linked lists
 * @r : pointer to first node
 *
 * Return : size of list
*/
size_t print_listint(const listint_t *r)
{
    size_t i = 0;

    while (r)
    {
        printf("%d/n", r->n);
        r = r->next;
        i++;
    }
    return (i);
}
