##
## EPITECH PROJECT, 2020
## B-CPE-200-LYN-2-1-matchstick-morgan.ehni
## File description:
## Makefile
##

SRC	=	$(wildcard	src/*.c)\
		$(wildcard	lib/*.c)\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
	ar	rc	lib/libmy.a	lib/*.o
	gcc	-g3	-o	$(NAME)	$(OBJ)	-L./lib/	-lmy	-I./include/

clean:
	rm	-f	$(OBJ)

fclean:	clean
	rm	-f	$(NAME)
	rm	-f	lib/libmy.a

re:	fclean	all