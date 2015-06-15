/*
** marceline.h for marceline in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 11:09:32 2015 sylvain garant
** Last update Sun Jun 14 16:49:32 2015 sylvain garant
*/

#ifndef MARCELINE_H_
# define MARCELINE_H_

#include <math.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define EMPTY "."
#define FULL "#"

#define I_SIZE 64
#define L_SIZE 65
#define O_SIZE 2
#define G_SIZE ((I_SIZE * L_SIZE + L_SIZE) + (L_SIZE * O_SIZE + O_SIZE))

typedef struct	s_nod t_nod;

typedef union		uDouble
{
  double                d;
  unsigned long int     i;
}			uDouble;

struct		s_nod
{
  double	data;
};

typedef struct	s_rlt
{
  uDouble	gen[G_SIZE];
  unsigned int	igen;
  double	data[O_SIZE];
}		t_rlt;

/* picture.c */
void    print_pic(t_nod nn[64]);
void    fill_pic(t_nod nn[64]);

/* my_putchar.c */
void	my_putchar(char c);

/* my_put_nbr.c */
void	my_put_nbr(int nb);

/* maths.c */
void	coef_application(t_nod layer[L_SIZE], t_nod output[O_SIZE], t_rlt*);

/* my_memset.c */
void	*my_memset(void *s, char c, int n);

/* my_reallocat.c */
char    *reallocat(char *st, char *nd);

/* layer.c */
void	data_input(t_nod prev_layer[], int pl_size, t_nod *nod, t_rlt *res);
int     vodka(t_nod left[], int l_size, t_nod right[], int r_size, t_rlt *res);

/* string_functions.c */
char	*dtos(uDouble data);

#endif
