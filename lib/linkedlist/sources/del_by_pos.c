/*
** del_by_pos.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:52:19 2016 sonny fournier
** Last update Sat Feb 13 00:55:43 2016 sonny fournier
*/

#include "list.h"

void	condition_del_pos(t_node **tmp, t_list **list)
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

t_list		*del_by_pos(t_list *list, int pos)
{
  int		i;
  t_node	*tmp;

  i = 1;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && i <= pos)
	{
	  if (pos == i)
	    {
	      condition_del_pos(&tmp, &list);
	      free(tmp);
	      list->len--;
	    }
	  else
	    tmp = tmp->next;
	  i++;
	}
    }
  return (list);
}
