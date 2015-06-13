/*
** main.c for AI in /home/borner_c/Perso/AI/src
** 
** Made by clément borner
** Login   <borner_c@epitech.net>
** 
** Started on  Sat Jun 13 15:07:13 2015 clément borner
** Last update Sat Jun 13 15:11:35 2015 clément borner
*/


#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include "../include/marceline.h"

void	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}

int		main()
{
  t_nod	input[64];
  t_nod	output[10];

  (void) output;
  srand(getpid() * time(0));
  fill_pic(input);
  print_pic(input);
  coef_aplication(input);
  return (0);
}
