/*
** main.c for main in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 10:33:33 2015 sylvain garant
** Last update Sat Jun 13 13:19:00 2015 sylvain garant
*/

#include "../include/marceline.h"

void	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}

int	main()
{
  t_nod	nn[64];

  fill_pic(nn);
  print_pic(nn);
  return (0);
}
