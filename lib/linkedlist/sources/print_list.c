/*
** print_list.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:39:09 2016 sonny fournier
** Last update Wed Mar 16 02:47:41 2016 cyril puccio
*/

#include "list.h"

void	print_list(t_list *list)
{
  t_node	*tmp;

  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  my_printf("%s -> ", tmp->data);
	  tmp = tmp->next;
	}
    }
  my_printf("NULL\n");
}
