/*
** len_of_list.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:55:38 2016 sonny fournier
** Last update Fri Feb 12 23:56:47 2016 sonny fournier
*/

#include "list.h"

int	len_of_list(t_list *list)
{
  int	len;

  len = 0;
  if (list != NULL)
    len = list->len;
  return (len);
}
