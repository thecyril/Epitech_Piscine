/*
** my_strdup.c for my_strdup in /home/puccio_c/rendu/Prog_Elem/CPE_2015_Allum1
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Feb 15 14:02:31 2016 cyril puccio
** Last update Mon Feb 15 14:10:14 2016 cyril puccio
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*s;

  if ((s = malloc(my_strlen(str))) == 0)
    {
      return (0);
    }
  my_strcpy(s, str);
  return (s);
}
