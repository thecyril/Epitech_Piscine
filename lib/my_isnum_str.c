/*
** is_num_str.c for is_num_str in /home/puccio_c/rendu/Prog_Elem/dante/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue May 10 15:12:36 2016 cyril puccio
** Last update Tue May 10 17:10:00 2016 cyril puccio
*/

#include "my.h"

int	my_isnum_str(char *str)
{
  int	i;

  i = 0;
  i = (str[0] == '-');
  while (str[i])
    {
      if ('0' > str[i] || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
