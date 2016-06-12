/*
** add_end.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:22:21 2016 sonny fournier
** Last update Sat Feb 13 00:43:22 2016 sonny fournier
*/

#include "list.h"

t_list	*add_end(t_list	*list, void *data)
{
  t_node	*new;

  new = create_node();
  if (list != NULL)
    {
      if (new != NULL)
	{
	  new->data = data;
	  new->next = NULL;
	  if (list->tail == NULL)
	    {
	      new->prev = NULL;
	      list->head = new;
	      list->tail = new;
	    }
	  else
	    {
	      list->tail->next = new;
	      new->prev = list->tail;
	      list->tail = new;
	    }
	  list->len++;
	}
    }
  return (list);
}
