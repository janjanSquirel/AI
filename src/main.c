/*
** main.c for main in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 10:33:33 2015 sylvain garant
<<<<<<< HEAD
** Last update Sat Jun 13 14:55:24 2015 sylvain garant
=======
<<<<<<< HEAD
** Last update Sat Jun 13 13:53:42 2015 clément borner
=======
** Last update Sat Jun 13 13:19:00 2015 sylvain garant
>>>>>>> 4dd0496a9c2362aa6ec4bf5494387c4b6544aceb
>>>>>>> 4dcbd94ec0a4ec4f2712f4d7f35ea4ae6b95e53c
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
<<<<<<< HEAD
  t_nod	input[64];
  t_nod	output[10];

  fill_pic(input);
  print_pic(input);
=======
  t_nod		nn[64];

  srand(getpid() * time(0));
  fill_pic(nn);
  /* print_pic(nn); */
  coef_aplication(nn);
>>>>>>> 4dcbd94ec0a4ec4f2712f4d7f35ea4ae6b95e53c
  return (0);
}
