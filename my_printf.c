/*
** my_printf.c for my_printf in /home/puccio_c/rendu/PSU_2015_my_printf
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Nov  5 16:48:35 2015 cyril puccio
** Last update Fri Nov 13 09:28:13 2015 cyril puccio
*/

#include        <stdlib.h>
#include        <stdarg.h>
#include	"struc.h"

void             initstr(t_str *ptr)
{
  ptr[0].c = 's';
  ptr[0].ptr = put_str;
}

void             initint(t_int *ptr)
{
  ptr[0].c = 'd';
  ptr[0].ptr = put_nbr;
}

void             initchar(t_char *ptr)
{
  ptr[0].c = 'c';
  ptr[0].ptr = put_char;
}

void		structure(char *str, va_list ap)
{
  t_str 	strucstr[1];
  t_int		strucint[1];
  t_char	struchar[1];

  initstr(strucstr);
  initint(strucint);
  initchar(struchar);
  if (str[0] == strucstr[0].c)
    strucstr[0].ptr(va_arg(ap, char *));
  if (str[0] == strucint[0].c)
    strucint[0].ptr(va_arg(ap, int));
  if (str[0] == struchar[0].c)
    struchar[0].ptr(va_arg(ap, int));
}

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;

  va_start(ap, str);
  i = 0;
  while (str[i])
    {
      if (str[i] == '%')
	{
	  i += 1;
	  if (str[i] == '%')
	    my_putchar('%');
	  else
	    structure(str + i, ap);
	}
      else
	my_putchar(str[i]);
      i++;
    }
}

int	main()
{
  char *str;
  int	nb;
  char	c;

  c = 'a';
  str = "lel";
  nb = 20;
  my_printf("%d", nb);
  return(0);
}
