/*
** main.c for main in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 10:33:33 2015 sylvain garant
<<<<<<< HEAD
** Last update Sat Jun 13 13:26:11 2015 clément borner
=======
** Last update Sat Jun 13 13:19:00 2015 sylvain garant
>>>>>>> 4dd0496a9c2362aa6ec4bf5494387c4b6544aceb
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
  t_nod		nn[64];

  srand(getpid() * time(0));
  fill_pic(nn);
  print_pic(nn);
  coef_aplication(nn);
  return (0);
}
