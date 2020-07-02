/*
** EPITECH PROJECT, 2019
** list_utils3
** File description:
** Linked list functions
*/

#include "lib.h"

regroup_t *init_lists(void)
{
    regroup_t *mylists = malloc(sizeof(*mylists));

    mylists->l_a = new_list();
    mylists->l_b = new_list();
    mylists->check = 0;
    mylists->index = 0;
    mylists->str = malloc(sizeof(char) * 10000000);
    return (mylists);
}

void clear_lists(regroup_t *mylists)
{
    while (!is_empty_list(mylists->l_a))
        mylists->l_a = pop_back_list(mylists->l_a);
    while (!is_empty_list(mylists->l_b))
        mylists->l_b = pop_back_list(mylists->l_b);
}

void pa(regroup_t *mylists)
{
    if (mylists->l_b->length != 0) {
        if_pa(mylists);
        if (mylists->l_b->length < 2) {
            mylists->l_b->begin->next = mylists->l_a->begin;
            mylists->l_a->begin->back = mylists->l_b->begin;
            mylists->l_b->begin = NULL;
            mylists->l_b->end = NULL;
            mylists->l_a->begin = mylists->l_a->begin->back;
        }
        mylists->l_b->length--;
        mylists->l_a->length++;
        pa_print(mylists);
    }
}

void pb(regroup_t *mylists)
{
    if (mylists->l_a->length != 0) {
        if_pb(mylists);
        if (mylists->l_a->length < 2) {
            mylists->l_a->begin->next = mylists->l_b->begin;
            mylists->l_b->begin->back = mylists->l_a->begin;
            mylists->l_a->begin = NULL;
            mylists->l_a->end = NULL;
            mylists->l_b->begin = mylists->l_b->begin->back;
        }
        mylists->l_b->length++;
        mylists->l_a->length--;
        pb_print(mylists);
    }
}

void ra(regroup_t *li)
{
    if (li->l_a->begin != NULL) {
        li->l_a->begin->back = li->l_a->end;
        li->l_a->begin = li->l_a->begin->next;
        li->l_a->end->next = li->l_a->begin->back;
        li->l_a->begin->back = NULL;
        li->l_a->end->next->next = NULL;
        li->l_a->end = li->l_a->end->next;
        ra_print(li);
    }
}