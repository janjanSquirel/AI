/*
** my_memset.c for my_memset in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 16:00:28 2015 sylvain garant
** Last update Sat Jun 13 16:02:00 2015 sylvain garant
*/

#include "../include/marceline.h"

void	*my_memset(void *s, char c, int n)
{
  char	*ptr;

  ptr = (char*) s;
  while (n-- > 0)
    *ptr++ = c;
  return (s);
}
