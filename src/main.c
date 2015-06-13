/*
** main.c for AI in /home/borner_c/Perso/AI/src
** 
** Made by clément borner
** Login   <borner_c@epitech.net>
** 
** Started on  Sat Jun 13 15:07:13 2015 clément borner
** Last update Sat Jun 13 17:08:07 2015 sylvain garant
*/

#include "../include/marceline.h"

void	init_layer(t_nod layer[65])
{
  int	i;

  i = -1;
  while (++i < 65)
    my_memset(&layer[i], 0, sizeof(t_nod));
}

int	add_link(t_lnk **stack, t_nod *nod)
{
  t_lnk	*elem;
  t_lnk	*cpy;

  if (!(elem = malloc(sizeof(*elem))))
    return (-1);
  my_memset(elem, 0, sizeof(*elem));
  elem->nod = nod;
  elem->weight = (double) rand();
  while ((elem->weight /= 10) > 1);
  if (!(cpy = *stack))
    {
      *stack = elem;
      return (0);
    }
  while (cpy->next && (cpy = cpy->next));
  cpy->next = elem;
  return (0);
}

int	vodka(t_nod input[64], t_nod layer[65])
{
  int	iip;
  int	il;

  iip = -1;
  while (++iip < 64)
    {
      il = -1;
      input[iip].link = NULL;
      while (++il < 65)
	if (add_link(&input[iip].link, &layer[il]))
	  return (-1);
    }
  return (0);
}

int	main()
{
  t_nod	input[64];
  t_nod	layer[65];
  t_nod	output[10];

  srand(getpid() * time(0));
  init_layer(layer);
  fill_pic(input);
  vodka(input, layer);
  print_pic(input);
  coef_aplication(input);
  return (0);
}
