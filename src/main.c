/*
** main.c for main in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 10:33:33 2015 sylvain garant
** Last update Sat Jun 13 14:55:24 2015 sylvain garant
*/

#include "../include/marceline.h"

void	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}

int	main()
{
  t_nod	input[64];
  t_nod	output[10];

  fill_pic(input);
  print_pic(input);
  return (0);
}
