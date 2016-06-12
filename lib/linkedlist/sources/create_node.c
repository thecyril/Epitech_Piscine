/*
** create_node.c for  in /home/fourni_s/UNIX/Presets/lib/list/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Feb 13 00:25:39 2016 sonny fournier
** Last update Sat Feb 13 01:00:28 2016 sonny fournier
*/

#include "list.h"

t_node	*create_node()
{
  t_node	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    return (new);
  else
    exit (-1);
}
