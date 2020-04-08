##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## My own makefile
##

SRC =	./my_compute_square_root.c	\
		./my_find_prime_sup.c 		\
		./my_is_prime.c 			\
		./my_showmem.c 				\
		./my_showstr.c 				\
		./my_sort_int_array.c 		\
		./my_str_isalpha.c 			\
		./my_str_islower.c 			\
		./my_str_isnum.c 			\
		./my_str_isprintable.c 		\
		./my_str_isupper.c 			\
		./my_strcapitalize.c 		\
		./my_strcat.c 				\
		./my_strcmp.c 				\
		./my_strcpy.c 				\
		./my_strncat.c 				\
		./my_strncmp.c 				\
		./my_strncpy.c 				\
		./my_strstr.c 				\
		./my_swap.c 				\
		./get_len.c					\
		./my_strparser.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a
CFLAGS = -Wall -Wextra -I../../include/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME)

re:	fclean all
