##
## Makefile for AI in /home/borner_c/Perso/AI/src
## 
## Made by clément borner
## Login   <borner_c@epitech.net>
## 
## Started on  Sat Jun 13 10:50:05 2015 clément borner
<<<<<<< HEAD
## Last update Sat Jun 13 13:23:44 2015 clément borner
=======
## Last update Sat Jun 13 13:21:52 2015 sylvain garant
>>>>>>> 4dd0496a9c2362aa6ec4bf5494387c4b6544aceb
##

NAME	= Luc

SRC	= src/main.c \
	src/picture.c \
<<<<<<< HEAD
	src/maths.c
=======
	src/my_putchar.c \
	src/my_put_nbr.c \
>>>>>>> 4dd0496a9c2362aa6ec4bf5494387c4b6544aceb

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
