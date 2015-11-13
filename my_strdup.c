/*
** my_strdup.c for my_strdup in /home/puccio_c/rendu/Piscine_C_infinadd/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct 19 11:46:21 2015 cyril puccio
** Last update Tue Nov  3 11:43:46 2015 cyril puccio
*/

#include <stdlib.h>

char    *my_strdup(char *str)
{
  char*s;

  if ((s = malloc(my_strlen(str))) == 0)
    return (0);
  my_strcpy(s, str);
  return (s);
}
