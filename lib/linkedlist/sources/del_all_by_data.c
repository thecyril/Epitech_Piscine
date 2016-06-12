/*
** del_all_by_data.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:45:09 2016 sonny fournier
** Last update Sat Feb 13 01:04:11 2016 sonny fournier
*/

#include "list.h"

void	condition_of_del_all(t_node **del, t_list **list)
{
  if ((*del)->next == NULL)
    {
      (*list)->tail = (*del)->prev;
      (*list)->tail->next = NULL;
    }
  else if ((*del)->prev == NULL)
    {
      (*list)->head = (*del)->next;
      (*list)->head->prev = NULL;
    }
  else
    {
      (*del)->next->prev = (*del)->prev;
      (*del)->prev->next = (*del)->next;
    }
}

t_list	*del_all_by_data(t_list *list, void *data)
{
  t_node	*tmp;
  t_node	*del;

  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  if (tmp->data == data)
	    {
	      del = tmp;
	      tmp = tmp->next;
	      condition_of_del_all(&del, &list);
	      free(del);
	      list->len--;
	    }
	  else
	    tmp = tmp->next;
	}
    }
  return (list);
}
