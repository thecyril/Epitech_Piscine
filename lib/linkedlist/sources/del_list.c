/*
** del_list.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:35:12 2016 sonny fournier
** Last update Fri Feb 12 23:37:48 2016 sonny fournier
*/

#include "list.h"

void	del_list(t_list **list)
{
  t_node	*tmp;
  t_node	*del;

  if (*list != NULL)
    {
      tmp = (*list)->head;
      while (tmp != NULL)
	{
	  del = tmp;
	  tmp = tmp->next;
	  free(del);
	}
      free(*list), *list = NULL;
    }
}
