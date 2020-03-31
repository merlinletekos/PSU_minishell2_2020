##
## EPITECH PROJECT, 2020
## my_libs
## File description:
## Makefile - linked
##

SRC =	./add_element_s.c \
		./add_element_e.c \
		./is_empty_l.c

OBJ =	$(SRC:.c=.o)

NAME =	liblink.a
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