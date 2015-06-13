/*
** my_put_nbr.c for my_put_nbr in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 13:20:13 2015 sylvain garant
** Last update Sat Jun 13 13:23:45 2015 sylvain garant
*/

#include "../include/marceline.h"

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(-nb);
    }
  if (nb / 10)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
}
