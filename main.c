/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** main
*/

#include "lib.h"

int main(int ac, char **av)
{
    regroup_t *mylists = init_lists();
    int i = 1;
    for (; i != ac; i++)
        mylists->l_a = push_back_list(mylists->l_a, my_atoi(av[i]));
    add_pos_list(mylists->l_a);
    my_sort(mylists);
    write(1, mylists->str, mylists->index);
    clear_lists(mylists);
    free(mylists->str);
    free(mylists);
    my_putchar('\n');
    return (0);
}
