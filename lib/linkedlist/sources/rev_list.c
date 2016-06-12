/*
** rev_list.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Feb 13 00:11:56 2016 sonny fournier
** Last update Sat Feb 13 01:28:35 2016 sonny fournier
*/

#include "list.h"

t_list		*rev_list(t_list *list)
{
  t_list	*ret;
  t_node	*tmp;

  ret = NULL;
  tmp = list->tail;
  if (list != NULL)
    {
      ret = create_list();
      while (tmp != NULL)
	{
	  ret = add_end(ret, tmp->data);
	  tmp = tmp->prev;
	}
    }
  return (ret);
}
