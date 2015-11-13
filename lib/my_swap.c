/*
** my_swap.c for my_swap in /home/puccio_c/rendu/Piscine_C_J04
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Oct  1 10:34:43 2015 cyril puccio
** Last update Mon Oct 12 09:23:37 2015 cyril puccio
*/

int	my_swap(int *a, int *b)
{
  int	var;

  var = *a;
  *a = *b;
  *b = var;

  return (0);
}
