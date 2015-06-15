/*
** my_reallocat.c for my_reallocat in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 19:36:49 2015 sylvain garant
** Last update Sun Jun 14 09:41:40 2015 sylvain garant
*/

#include "../include/marceline.h"

char	*reallocat(char *st, char *nd)
{
  char  *result;
  char  *buf;

  if (!(result = malloc(sizeof(char) * (strlen(st) + strlen(nd) + 1))))
    return (0);
  buf = result;
  while (*st)
    *buf++ = *st++;
  while (*nd)
    *buf++ = *nd++;
  *buf = 0;
  return (result);
}
