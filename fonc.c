/*
** flag.c for flag in /home/puccio_c/rendu/PSU_2015_my_printf
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Nov  9 11:54:20 2015 cyril puccio
** Last update Thu Nov 12 13:59:40 2015 cyril puccio
*/

#include        <stdarg.h>

void             put_str(char *str)
{
  my_putstr(str);
}

void		put_nbr(int nb)
{
   my_put_nbr(nb);
}

void		put_char(char c)
{
  my_putchar(c);
}
