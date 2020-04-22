##
## EPITECH PROJECT, 2020
## my_libs
## File description:
## Makefile

ECHO    =       /bin/echo -e
DEFAULT =       "\033[00m"
#SHELL  =       "\e[0;0m"

DEFAULT =       "\e[0m"
BOLD    =       "\e[1m"
DIM     =       "\e[2m"
UNDLN   =       "\e[4m"
SHINE   =       "\e[5;37m"
RODE    =       "\e[9;37m"

BLACK   =       "\e[30m"
RED     =       "\e[31m"
GREEN   =       "\e[32m"
YELLOW  =       "\e[33m"
BLUE    =       "\e[34m"
MAGEN   =       "\e[35m"
CYAN    =       "\e[36m"
WHITE   =       "\e[1;37m"

LIGHT_RED       =       "\e[91m"
LIGHT_GREEN     =       "\e[92m"
LIGHT_YELLOW    =       "\e[93m"
LIGHT_BLUE      =       "\e[94m"
LIGHT_MAGEN     =       "\e[95m"
LIGHT_CYAN      =       "\e[96m"

LIBDIR		=	./lib/

INCLUDE = -I./include

CFLAGS = -W -Wall -Wextra $(INCLUDE)

RMFLAGS =	*.gcda *.gcno src/*.gcda src/*.gcno

SRC =	./src/main.c				\
		./src/env_manager.c			\
		./src/mysh.c				\
		./src/builtins/env.c		\
		./src/builtins/exit.c		\
		./src/builtins/setenv.c		\
		./src/builtins/unsetenv.c

OBJ =	$(SRC:.c=.o)

NAME =	mysh

SRC_LIB		=	link	\
			print	\
			my 		\

LIB_PATHS = 	$(LIBDIR)linkedlib \
			$(LIBDIR)my \
			$(LIBDIR)printlib

LIBRARIES       =       $(SRC_LIB:%=-l%)

LDFLAGS		=	-L./lib $(LIBRARIES)

all :	title $(NAME)

title:
	@$(ECHO)
	@nm-online -q -t 1 -x || /bin/false \
	&& curl --connect-timeout 2 http://artii.herokuapp.com/make?tex\
	t=$(NAME) \
	|| $(ECHO) $(BOLD) $(YELLOW) Building $(NAME)$(DEFAULT)
	@$(ECHO)

$(NAME) :	$(OBJ)
		@$(ECHO) "\n"
		@for MAKE_PATH in $(LIB_PATHS) ; do \
			make -C $$MAKE_PATH -s ; \
		done
		@gcc -o $(NAME) $(OBJ) $(LDFLAGS) \
		&& $(ECHO) $(BOLD) $(GREEN)"-> BUILD SUCCESS !"$(DEFAULT) || $(ECHO) $(BOLD) $(RED)"-> BUILD FAILED"$(DEFAULT)

clean :
		@for MAKE_PATH in $(LIB_PATHS) ; do \
			make clean -C $$MAKE_PATH -s ; \
		done
		@rm -f $(OBJ)
		@rm -f $(RMFLAGS)
		@($(ECHO) $(BOLD) $(GREEN)✓" CLEAN "$(NAME)$(DEFAULT))

fclean :
		@for MAKE_PATH in $(LIB_PATHS) ; do \
			make fclean -C $$MAKE_PATH -s ; \
		done
		@rm -f $(OBJ)
		@rm -f $(NAME)
		@rm -f $(RMFLAGS)
		@rm -f $(TESTNAME)
		@($(ECHO) $(BOLD) $(GREEN)✓" FCLEAN "$(NAME)$(DEFAULT))

re :	fclean all

%.o :		%.c
		@gcc -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)"  [OK] "$(WHITE) || $(ECHO) -n $(BOLD) $(RED)"  [KO] "$(WHITE) && $(ECHO) $(BOLD) $< | rev | cut -d'/' -f 1 | rev

debug: CFLAGS += -g
debug: re