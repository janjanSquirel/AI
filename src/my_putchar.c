/*
** my_putchar.c for my_putchar in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 13:21:10 2015 sylvain garant
** Last update Sat Jun 13 13:24:04 2015 sylvain garant
*/

#include <unistd.h>
#include "../include/marceline.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
