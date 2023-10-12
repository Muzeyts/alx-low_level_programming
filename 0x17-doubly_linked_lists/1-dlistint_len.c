#include "lists.h"

/**
 * print_dlistint - all elements of a will be printed
 * dlistint_t list - list 
 *
 * @h: head of the list
 * Return: returns n number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        n++;
        h = h->next;
    }

    return n;
}
