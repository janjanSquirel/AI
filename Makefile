##
## Makefile for AI in /home/borner_c/Perso/AI/src
## 
## Made by clément borner
## Login   <borner_c@epitech.net>
## 
## Started on  Sat Jun 13 10:50:05 2015 clément borner
## Last update Sat Jun 13 13:23:44 2015 clément borner
##

NAME	= Luc

SRC	= src/main.c \
	src/picture.c \
	src/maths.c

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
