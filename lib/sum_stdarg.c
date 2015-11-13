/*
** sum_stdarg.c for sum_stdarg in /home/puccio_c/rendu/PSU_2015_my_printf_bootstrap
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue Nov  3 12:02:57 2015 cyril puccio
** Last update Thu Nov  5 14:25:09 2015 cyril puccio
*/

#include <stdarg.h>

int		sum_stdarg(int i, int nb, ...)
{
  int		val;
  int		j;
  va_list	ap;

  j = 0;
  va_start(ap, nb);
  val = 0;
  if (i == 0)
    {
      while (j < nb)
	{
	  val = val + va_arg(ap, int);
	  j++;
	}
    }
  else if (i == 1)
    {
      while (j < nb)
	{
	  val = val + my_strlen(va_arg(ap, char*));
	  j++;
	}
    }
  va_end(ap);
  return (val);
}
