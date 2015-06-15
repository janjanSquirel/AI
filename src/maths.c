/*
** maths.c for AI in /home/borner_c/Perso/AI/src
** 
** Made by clément borner
** Login   <borner_c@epitech.net>
** 
** Started on  Sat Jun 13 13:16:05 2015 clément borner
** Last update Sun Jun 14 16:51:28 2015 sylvain garant
*/

#include "../include/marceline.h"

void		coef_application(t_nod layer[L_SIZE], t_nod output[O_SIZE],
				 t_rlt *res)
{
  uDouble	teta;
  double	add;
  int		il;
  int		io;

  add = 0;
  il = -1;
  io = -1;
  while (++il < L_SIZE)
    add += layer[il].data;
  while (++io < O_SIZE)
    {
      teta.d = (double) rand();
      while ((teta.d /= 10) > 1);
      res->gen[res->igen++] = teta;
      //output[io].data.d = 1 / (1 + exp(-(add - teta.d)));
      output[io].data = (exp(add - teta.d) - exp(-(add - teta.d))) / 2;
      // FONCTION D'ACTIVATION
    }
}
