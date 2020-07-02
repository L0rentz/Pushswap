/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** push_swap
*/

#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum
{
    false,
    true
} bool;

typedef struct dlist_node_s
{
    unsigned int pos;
    int value;
    struct dlist_node_s *back;
    struct dlist_node_s *next;
} dlist_node_t, node_t;

typedef struct dlist_s
{
    unsigned int length;
    struct dlist_node_s *begin;
    struct dlist_node_s *end;
} dlist_t;

typedef struct regroup_s
{
    dlist_t *l_a;
    dlist_t *l_b;
    int check;
    char *str;
    int index;
} regroup_t;

dlist_t *new_list(void);
bool is_empty_list(dlist_t *li);
dlist_node_t *new_dlist_node(int x);
void print_list(dlist_t *li);
dlist_t *push_back_list(dlist_t *li, int x);
dlist_t *push_front_list(dlist_t *li, int x);
dlist_t *pop_front_list(dlist_t *li);
dlist_t *pop_back_list(dlist_t *li);
dlist_t *clear_list(dlist_t *li);
void clear_lists(regroup_t *mylists);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_atoi(char const *str);
int my_strlen(char const *str);
regroup_t *init_lists(void);
void pa(regroup_t *mylists);
void if_pa(regroup_t *mylists);
void pa_print(regroup_t *mylists);
void pb(regroup_t *mylists);
void if_pb(regroup_t *mylists);
void pb_print(regroup_t *mylists);
void ra(regroup_t *li);
void ra_print(regroup_t *li);
void rra(regroup_t *li);
void rra_print(regroup_t *li);
void my_sort(regroup_t *mylists);
unsigned int search_max_value(dlist_t *li);
unsigned int search_pos_min_value_add(dlist_t *li);
unsigned int add_pos_list(dlist_t *li);

#endif
