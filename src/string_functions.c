/*
** string_functions.c for string_functions in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 19:47:05 2015 sylvain garant
** Last update Sat Jun 13 20:09:13 2015 sylvain garant
*/

#include "../include/marceline.h"

char	*dtos(uDouble data)
{
  int	i;
  int	size;
  char	*result;

  size = sizeof(double) * 8;
  if (!(result = malloc(size)))
    return (NULL);
  i = -1;
  while (++i < size)
    result[i] = ((data.i >> (size - (i + 1))) % 2) + '0';
  return (result);
}
