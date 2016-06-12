/*
** list.h for  in /home/fourni_s/UNIX/Presets/lib/list/include
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Feb 12 23:18:38 2016 sonny fournier
** Last update Sat Feb 13 02:00:43 2016 sonny fournier
*/

#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <unistd.h>
#include "../../printf/sources/include/printf.h"

typedef struct	s_node
{
  char		*data;
  struct s_node	*next;
  struct s_node	*prev;
}		t_node;

typedef struct	s_list
{
  int		len;
  t_node	*tail;
  t_node	*head;
}		t_list;

int		len_of_list(t_list *list);
void		del_list(t_list **list);
void		print_list(t_list *list);
/* void            del_first_by_data(t_list *list, void *data); */
t_node		*create_node();
t_list		*create_list();
t_list          *rev_list(t_list *list);
t_list          *del_by_pos(t_list *list, int pos);
t_list		*add_beg(t_list *list, void *data);
t_list		*add_end(t_list *list, void *data);
t_list		*del_all_by_data(t_list *list, void *data);
t_list          *del_first_by_data(t_list *list, void *data);
t_list          *search_all_by_data(t_list *list, void *data);
t_list		*add_at_pos(t_list *list, void *data, int pos);
t_list          *search_first_by_data(t_list *list, void *data);

#endif /* !LIST_H_ */
