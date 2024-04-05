##
## EPITECH PROJECT, 2023
## b1
## File description:
## Makefile
##

NAME    =  	libhashtable.a

SRC     =	hash.c			\
			creator.c 		\
			deleter.c		\
			ht_delete.c		\
			ht_search.c		\
			ht_insert.c		\
			ht_dump.c		\
			my_strdup.c		\
			my_strlen.c 	\
			my_strcpy.c		\
			my_strcmp.c		\
			my_putstr.c		\
			my_putchar.c	\
			my_put_nbr.c	\
			my_getnbr.c		\
			show_list.c 	\

OBJ     =       $(SRC:.c=.o)

NAME    =       ../libhashtable.a

CFLAGS  =       -Wall -Wextra

CPPFLAGS        =       -I./include

CC      =       gcc

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p include

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	clean fclean re all
