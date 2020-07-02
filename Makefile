##
## EPITECH PROJECT, 2019
## push_swap
## File description:
## makefile
##

NAME	=	push_swap

SRCS	=	main.c \
		my_list_utils1.c \
		my_list_utils2.c \
		my_list_utils3.c \
		my_list_utils4.c \
		my_list_utils5.c \
		my_sort.c \
		my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_atoi.c \
		my_strlen.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS =	-Wall -Werror -Wextra -g3 -O3

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
		rm $(OBJS)

fclean:
		rm $(NAME)
		rm $(OBJS)

re: fclean all
