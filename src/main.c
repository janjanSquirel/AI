/*
** main.c for AI in /home/borner_c/Perso/AI/src
** 
** Made by clément borner
** Login   <borner_c@epitech.net>
** 
** Started on  Sat Jun 13 15:07:13 2015 clément borner
** Last update Sun Jun 14 16:58:53 2015 sylvain garant
*/

#include "../include/marceline.h"

void	neural_network(t_rlt *res)
{
  int	i;
  t_nod	input[I_SIZE];
  t_nod	layer[L_SIZE];
  t_nod	output[O_SIZE];

  i = -1;
  srand(getpid() * time(0));
  my_memset(layer, 0, L_SIZE * sizeof(t_nod));
  fill_pic(input);
  vodka(input, I_SIZE, layer, L_SIZE, res);
  vodka(layer, L_SIZE, output, O_SIZE, res);
  while (++i < O_SIZE)
    res->data[i] = output[i].data;
}

int	main()
{
  int	i;
  t_rlt	result;

  i = -1;
  my_memset(&result, 0, sizeof(t_rlt));
  neural_network(&result);
  while (++i < G_SIZE)
    printf("%f\n", result.gen[i].d);
  i = -1;
  while (++i < O_SIZE)
    printf("\e[0;42m%f\e[0m\n", result.data[i]);
  return (0);
}
