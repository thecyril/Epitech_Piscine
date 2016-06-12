/*
** search_first_by_data.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Feb 13 00:11:32 2016 sonny fournier
** Last update Sat Feb 13 00:11:33 2016 sonny fournier
*/

#include "list.h"

t_list		*search_first_by_data(t_list *list, void *data)
{
  int		found;
  t_list	*ret;
  t_node	*tmp;

  found = 0;
  ret = NULL;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && !found)
	{
	  if (tmp->data == data)
	    {
	      ret = create_list();
	      ret = add_end(ret, data);
	      found = 1;
	    }
	  else
	    tmp = tmp->next;
	}
    }
  return (ret);
}
