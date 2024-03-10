#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: list to be manipulated
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL)
    {
        return;
    }

    listint_t *tmp;
    listint_t *current;

    tmp = (*list)->next;

    while (tmp != NULL)
    {
        current = tmp;
        while (current->prev != NULL && current->n < current->prev->n)
        {
            current->prev->next = current->next;
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            current->next = current->prev;
            current->prev = current->prev->prev;
            current->next->prev = current;
            if (current->prev == NULL)
            {
                (*list) = current;
            }
            else
            {
                current->prev->next = current;
            }
            print_list(*list);
        }
        tmp = tmp->next;
    }
}
:
