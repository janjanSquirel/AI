/*
** maths.c for AI in /home/borner_c/Perso/AI/src
** 
** Made by clément borner
** Login   <borner_c@epitech.net>
** 
** Started on  Sat Jun 13 13:16:05 2015 clément borner
** Last update Sat Jun 13 13:57:59 2015 clément borner
*/

#include <stdio.h>
#include "../include/marceline.h"

void	coef_aplication(t_nod *nn)
{
  int		i;
  double	nb;

  i = -1;
  nb = (double)(rand());
  while (nb > 1)
    nb /= 10;
  while (++i < 64)
    nn[i].data *= nb;
}
