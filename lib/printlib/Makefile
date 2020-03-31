##
## EPITECH PROJECT, 2020
## my_libs
## File description:
## Makefile
##

SRC = 	./my_getnbr.c \
		./my_isneg.c \
		./my_nbr_to_base.c \
		./my_printf.c \
		./my_put_double.c \
		./my_put_nbr.c \
		./my_put_ptr.c \
		./my_putchar.c \
		./my_putstr.c \
		./my_revstr.c \
		./my_strlen.c \
		./my_strtolower.c \
		./my_strtoupper.c \
		./is_flag.c \
		./my_helper.c

OBJ = $(SRC:.c=.o)
NAME =	libprint.a
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