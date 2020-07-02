/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_sort
*/

#include "lib.h"

void my_sort_ra_rra(regroup_t *mylists, unsigned int pos)
{
    if (pos > mylists->l_a->length / 2) {
        for (; pos != mylists->l_a->length + 1; pos++)
            rra(mylists);
    }
    else {
        for (; pos > 1; pos--)
            ra(mylists);
    }
}

void my_sort(regroup_t *mylists)
{
    unsigned  int pos = 0;
    int count = 1;
    if (search_max_value(mylists->l_a) != mylists->l_a->length) {
        while (mylists->l_a->length != 1) {
            if (mylists->index > 9750000) {
                write(1, mylists->str, mylists->index);
                free(mylists->str);
                mylists->str = malloc(sizeof(char) * 10000000);
                mylists->index = 0;
            }
            pos = search_pos_min_value_add(mylists->l_a);
            my_sort_ra_rra(mylists, pos);
            pb(mylists);
            count++;
        }
        for (; count != 0; count--) {
            pa(mylists);
        }
    }
}