/*
** layer.c for layer in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 19:41:11 2015 sylvain garant
** Last update Sun Jun 14 16:52:10 2015 sylvain garant
*/

#include "../include/marceline.h"

void		data_input(t_nod prev_layer[], int pl_size,
			   t_nod *nod, t_rlt *res)
{
  double	weight;
  double	teta;
  int		i;

  i = -1;
  nod->data = 0;
  while (++i < pl_size)
    {
      weight = (double) rand();
      while ((weight /= 10) > 1);
      res->gen[res->igen++].d = weight;
      nod->data += prev_layer[i].data * weight;
    }
  teta = (double) rand();
  while ((teta /= 10) > 1);
  res->gen[res->igen++].d = teta;
  nod->data -= teta;

  while (nod->data > 1)
    nod->data /= 10;
}

int     vodka(t_nod left[], int l_size, t_nod right[], int r_size, t_rlt *res)
{
  int   i;

  i = -1;
  while (++i < r_size)
    data_input(left, l_size, &right[i], res);
  return (0);
}
