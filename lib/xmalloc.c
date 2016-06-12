/*
** xmalloc.c for xmalloc in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Mar 31 15:32:04 2016 cyril puccio
** Last update Sun May 22 15:58:44 2016 cyril puccio
*/

#include "my.h"

void    *xmalloc(int size)
{
  void  *s;

  if ((s = malloc(size)) == NULL)
    {
      my_putstr("[Error] Can't alloc");
      exit(EXIT_FAILURE);
    }
  return (s);
}
