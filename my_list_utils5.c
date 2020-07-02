/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** Linked list functions
*/

#include "lib.h"

void pb_print(regroup_t *mylists)
{
    if (mylists->check == 1) {
        mylists->str[mylists->index] = ' ';
        mylists->str[mylists->index + 1] = 'p';
        mylists->str[mylists->index + 2] = 'b';
        mylists->index += 3;
    }
    else {
        mylists->str[mylists->index] = 'p';
        mylists->str[mylists->index + 1] = 'b';
        mylists->index += 2;
        mylists->check = 1;
    }
}

void if_pb(regroup_t *mylists)
{
    if (is_empty_list(mylists->l_b)) {
        mylists->l_b = malloc(sizeof(*mylists->l_b));
        mylists->l_b->length = 0;
        mylists->l_b->end = mylists->l_a->begin;
        mylists->l_b->begin = mylists->l_a->begin;
        mylists->l_a->begin = mylists->l_a->begin->next;
        mylists->l_a->begin->back->next = NULL;
        mylists->l_a->begin->back = NULL;
    }
    else if (mylists->l_a->length > 2) {
        dlist_node_t *tmp = mylists->l_a->begin;
        mylists->l_a->begin = mylists->l_a->begin->next;
        tmp->next = mylists->l_b->begin;
        mylists->l_b->begin->back = tmp;
        mylists->l_b->begin = tmp;
        mylists->l_a->begin->back = NULL;
    }
}

void ra_print(regroup_t *li)
{
    if (li->check == 1) {
        li->str[li->index] = ' ';
        li->str[li->index + 1] = 'r';
        li->str[li->index + 2] = 'a';
        li->index += 3;
    }
    else {
        li->str[li->index] = 'r';
        li->str[li->index + 1] = 'a';
        li->index += 2;
        li->check = 1;
    }
}

void rra_print(regroup_t *li)
{
    if (li->check == 1) {
        li->str[li->index] = ' ';
        li->str[li->index + 1] = 'r';
        li->str[li->index + 2] = 'r';
        li->str[li->index + 3] = 'a';
        li->index += 4;
    }
    else {
        li->str[li->index] = 'r';
        li->str[li->index + 1] = 'r';
        li->str[li->index + 2] = 'a';
        li->index += 3;
        li->check = 1;
    }
}