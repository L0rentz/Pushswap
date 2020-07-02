/*
** EPITECH PROJECT, 2019
** list_utils2
** File description:
** Linked list functions
*/

#include "lib.h"

dlist_t *new_list(void)
{
    return (NULL);
}

bool is_empty_list(dlist_t *li)
{
    if (li == NULL)
        return true;
    return false;
}

dlist_node_t *new_dlist_node(int x)
{
    dlist_node_t *element;
    element = malloc(sizeof(*element));
    element->value = x;
    element->next = NULL;
    element->back = NULL;
    return (element);
}

unsigned int search_max_value(dlist_t *li)
{
    int max_value = -2147483648;
    unsigned int len = 0;
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        if (tmp->value >= max_value) {
            len++;
            max_value = tmp->value;
        }
        tmp = tmp->next;
    }
    return (len);
}

void print_list(dlist_t *li)
{
    if (is_empty_list(li)) {
        my_putstr("Nothing to display, list is empty\n");
        return;
    }
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        my_put_nbr(tmp->value);
        if (tmp->next != NULL)
            my_putchar(' ');
        tmp = tmp->next;
    }
    my_putchar('\n');
}