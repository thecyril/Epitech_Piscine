/*
** disp_stdarg.c for disp_stdarg in /home/puccio_c/rendu/PSU_2015_my_printf_bootstrap
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Nov  4 10:29:09 2015 cyril puccio
** Last update Thu Nov  5 14:25:50 2015 cyril puccio
*/

#include <stdarg.h>

int		disp_stdarg(char *s, ...)
{
  int		j;
  va_list	ap;

  j = 0;
  va_start(ap, s);
  while (j < my_strlen(s))
    {
      if (s[j] == 'c')
	my_putchar(va_arg(ap, int));
      else if (s[j] == 's')
	my_putstr(va_arg(ap, char*));
      else if (s[j] == 'i')
	my_put_nbr(va_arg(ap, int));
      my_putchar('\n');
      j++;
    }
  va_end(ap);
}
