##
## Makefile for AI in /home/borner_c/Perso/AI/src
## 
## Made by clément borner
## Login   <borner_c@epitech.net>
## 
## Started on  Sat Jun 13 10:50:05 2015 clément borner
## Last update Sat Jun 13 10:58:32 2015 sylvain garant
##

NAME	= Luc

SRC	= main.c

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
