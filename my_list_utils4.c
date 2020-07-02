/*
** EPITECH PROJECT, 2019
** list_utils4
** File description:
** Linked list functions
*/

#include "lib.h"

unsigned int search_pos_min_value_add(dlist_t *li)
{
    int min_value = 2147483647;
    unsigned int pos = 1;
    unsigned int pos_save = 0;
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        tmp->pos = pos;
        if (tmp->value <= min_value) {
            pos_save = tmp->pos;
            min_value = tmp->value;
        }
        pos++;
        tmp = tmp->next;
    }
    return (pos_save);
}

unsigned int add_pos_list(dlist_t *li)
{
    unsigned int pos = 1;
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        tmp->pos = pos;
        pos++;
        tmp = tmp->next;
    }
    pos--;
    return (pos);
}

void rra(regroup_t *li)
{
    if (li->l_a->end != NULL) {
        li->l_a->end->next = li->l_a->begin;
        li->l_a->end = li->l_a->end->back;
        li->l_a->begin->back = li->l_a->end->next;
        li->l_a->end->next = NULL;
        li->l_a->begin->back->back = NULL;
        li->l_a->begin = li->l_a->begin->back;
        rra_print(li);
    }
}

void pa_print(regroup_t *mylists)
{
    if (mylists->check == 1) {
        mylists->str[mylists->index] = ' ';
        mylists->str[mylists->index + 1] = 'p';
        mylists->str[mylists->index + 2] = 'a';
        mylists->index += 3;
    }
    else {
        mylists->str[mylists->index] = 'p';
        mylists->str[mylists->index + 1] = 'a';
        mylists->index += 2;
        mylists->check = 1;
    }
}

void if_pa(regroup_t *mylists)
{
    if (mylists->l_a->length == 0) {
        mylists->l_a->end = mylists->l_b->begin;
        mylists->l_a->begin = mylists->l_b->begin;
        mylists->l_b->begin = mylists->l_b->begin->next;
        mylists->l_b->begin->back->next = NULL;
        mylists->l_b->begin->back = NULL;
    }
    else if (mylists->l_b->length > 2) {
        dlist_node_t *tmp = mylists->l_b->begin;
        mylists->l_b->begin = mylists->l_b->begin->next;
        tmp->next = mylists->l_a->begin;
        mylists->l_a->begin->back = tmp;
        mylists->l_a->begin = tmp;
        mylists->l_b->begin->back = NULL;
    }
}