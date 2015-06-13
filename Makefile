##
## Makefile for AI in /home/borner_c/Perso/AI/src
## 
## Made by clément borner
## Login   <borner_c@epitech.net>
## 
## Started on  Sat Jun 13 10:50:05 2015 clément borner
## Last update Sat Jun 13 16:38:20 2015 sylvain garant
##

NAME	= Luc

SRC	= src/main.c \
	src/picture.c \
	src/maths.c \
	src/my_putchar.c \
	src/my_put_nbr.c \
	src/my_memset.c \
	src/my_putstr.c

OBJ	= $(SRC:.c=.o)

RM	= rm -rf

CFLAGS	+= -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	cc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
