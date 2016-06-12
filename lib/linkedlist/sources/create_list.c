/*
** create_list.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:20:45 2016 sonny fournier
** Last update Sat Feb 13 01:00:12 2016 sonny fournier
*/

#include "list.h"

t_list	*create_list()
{
  t_list	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    if (new != NULL)
      {
	new->len = 0;
	new->head = NULL;
	new->tail = NULL;
      }
  return (new);
}
