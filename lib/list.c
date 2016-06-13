/*
** list.c for list in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/srcs
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Apr  8 13:37:02 2016 cyril puccio
** Last update Fri Jun 10 23:45:26 2016 cyril puccio
*/

#include "list.h"

void            free_list(t_list *list)
{
  t_list        *tmp;

  while (list->prev != NULL)
    list = list->prev;
  tmp = list;
  while (tmp->next)
    {
      list = list->next;
      free(tmp);
      tmp = list;
    }
  free(tmp);
}

t_list          *add_end(t_list *list, char *arg)
{
  t_list        *tmp;

  tmp = xmalloc(sizeof(t_list));
  tmp->str = arg;
  if (list == NULL)
    {
      tmp->next = NULL;
      tmp->prev = NULL;
    }
  else
    {
      while (list->next != NULL)
        list = list->next;
      tmp->prev = list;
      tmp->next = NULL;
      list->next = tmp;
    }
  return (tmp);
}

t_list		*del_inlist(t_list *list)
{
  if (list->next->first == 1 && list->prev->first == 1)
    exit(0);
  if (list->first == 1)
    list->next->first = 1;
  list->prev->next = list->next;
  list->next->prev = list->prev;
  return (list->next);
}

int             len_list(t_list *list)
{
  int           i;

  i = 0;
  while (list->first != 1)
    list = list->next;
  list = list->next;
  i++;
  while (list->first != 1)
    {
      list = list->next;
      i++;
    }
  return (i);
}
