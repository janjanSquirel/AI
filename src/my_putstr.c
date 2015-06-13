/*
** my_putstr.c for my_putstr in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 16:03:41 2015 sylvain garant
** Last update Sat Jun 13 16:04:32 2015 sylvain garant
*/

#include "../include/marceline.h"

void	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}
