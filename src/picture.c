/*
** picture.c for picture in /home/garant_s/AI
**
** Made by sylvain garant
** Login   <garant_s@epitech.net>
**
** Started on  Sat Jun 13 11:53:37 2015 sylvain garant
<<<<<<< HEAD
** Last update Sat Jun 13 13:30:19 2015 sylvain garant
=======
** Last update Sat Jun 13 13:53:27 2015 clément borner
>>>>>>> 4dcbd94ec0a4ec4f2712f4d7f35ea4ae6b95e53c
*/

#include "../include/marceline.h"

void	fill_pic(t_nod nn[64])
{
  nn[0].data = 0;
  nn[1].data = 0;
  nn[2].data = 0;
  nn[3].data = 0;
  nn[4].data = 0;
  nn[5].data = 0;
  nn[6].data = 0;
  nn[7].data = 0;
  nn[8].data = 0;
  nn[9].data = 0;
  nn[10].data = 0;
  nn[11].data = 1;
  nn[12].data = 0;
  nn[13].data = 0;
  nn[14].data = 0;
  nn[15].data = 0;
  nn[16].data = 0;
  nn[17].data = 0;
  nn[18].data = 0;
  nn[19].data = 1;
  nn[20].data = 0;
  nn[21].data = 0;
  nn[22].data = 0;
  nn[23].data = 0;
  nn[24].data = 0;
  nn[25].data = 0;
  nn[26].data = 0;
  nn[27].data = 1;
  nn[28].data = 0;
  nn[29].data = 1;
  nn[30].data = 0;
  nn[31].data = 0;
  nn[32].data = 0;
  nn[33].data = 0;
  nn[34].data = 0;
  nn[35].data = 1;
  nn[36].data = 1;
  nn[37].data = 1;
  nn[38].data = 1;
  nn[39].data = 0;
  nn[40].data = 0;
  nn[41].data = 0;
  nn[42].data = 0;
  nn[43].data = 0;
  nn[44].data = 0;
  nn[45].data = 1;
  nn[46].data = 0;
  nn[47].data = 0;
  nn[48].data = 0;
  nn[49].data = 0;
  nn[50].data = 0;
  nn[51].data = 0;
  nn[52].data = 0;
  nn[53].data = 1;
  nn[54].data = 0;
  nn[55].data = 0;
  nn[56].data = 0;
  nn[57].data = 0;
  nn[58].data = 0;
  nn[59].data = 0;
  nn[60].data = 0;
  nn[61].data = 0;
  nn[62].data = 0;
  nn[63].data = 0;
}

void	print_pic(t_nod nn[64])
{
  int	i;

  i = 0;
  while (i++ < 64)
    {
      nn[i].data ? write(1, FULL, 1) : write(1, EMPTY, 1);
      if (!(i % 8))
      	write(1, "\n", 1);
    }
}
