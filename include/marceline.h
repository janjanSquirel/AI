/*
** marceline.h for marceline in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 11:09:32 2015 sylvain garant
** Last update Sat Jun 13 16:49:03 2015 sylvain garant
*/

#ifndef MARCELINE_H_
# define MARCELINE_H_

#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define EMPTY "."
#define FULL "#"

typedef struct	s_lnk t_lnk;
typedef struct	s_nod t_nod;

struct		s_nod
{
  double	data;
  t_lnk		*link;
};

struct		s_lnk
{
  t_nod		*nod;
  double	weight;
  t_lnk		*next;
};

/* picture.c */
void    print_pic(t_nod nn[64]);
void    fill_pic(t_nod nn[64]);

/* my_putchar.c */
void	my_putchar(char c);

/* my_put_nbr.c */
void	my_put_nbr(int nb);

/* maths.c */
void    coef_aplication(t_nod *nn);

/* my_memset.c */
void	*my_memset(void *s, char c, int n);

#endif
