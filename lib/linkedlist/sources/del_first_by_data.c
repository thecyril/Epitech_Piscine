/*
** del_first_by_data.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:45:00 2016 sonny fournier
** Last update Sat Feb 13 01:40:32 2016 sonny fournier
*/

#include "list.h"

void	condition_del_first_data(t_node **tmp, t_list **list)
{
  if ((*tmp)->next == NULL)
    {
      (*list)->tail = (*tmp)->prev;
      (*list)->tail->next = NULL;
    }
  else if ((*tmp)->prev == NULL)
    {
      (*list)->head = (*tmp)->next;
      (*list)->head->prev = NULL;
    }
  else
    {
      (*tmp)->next->prev = (*tmp)->prev;
      (*tmp)->prev->next = (*tmp)->next;
    }
}

t_list		*del_first_by_data(t_list *list, void *data)
{
  int		found;
  t_node	*tmp;

  if (list != NULL)
    {
      tmp = list->head;
      found = 0;
      while (tmp != NULL && !found)
	{
	  if (tmp->data == data)
	    {
	      condition_del_first_data(&tmp, &list);
	      free(tmp);
	      list->len--;
	      found = 1;
	    }
	  else
	    {
	      tmp = tmp->next;
	    }
	}
    }
  return (list);
}
