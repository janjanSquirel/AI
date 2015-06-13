/*
** marceline.h for marceline in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 11:09:32 2015 sylvain garant
** Last update Sat Jun 13 13:29:38 2015 sylvain garant
*/

#ifndef MARCELINE_H_
# define MARCELINE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define EMPTY "."
#define FULL "#"

typedef struct	s_lnt t_lnk;
typedef struct	s_nod t_nod;

struct	s_nod
{
  double	data;
  struct s_nod	*next;
};

struct	s_lnk
{
  t_nod	*nod;
  t_lnk	*next;
};

/* picture.c */
void    print_pic(t_nod nn[64]);
void    fill_pic(t_nod nn[64]);

/* my_putchar.c */
void	my_putchar(char c);

/* my_put_nbr.c */
void	my_put_nbr(int nb);

#endif
