/*
** my_square_root.c for my_square_root in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 10:51:28 2015 cyril puccio
** Last update Thu Nov  5 14:49:43 2015 cyril puccio
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb == 1)
    return (1);
  while (i <= (nb/2))
    {
      if ((i * i) == nb)
	return (i);
      i++;
    }
  return (0);
}
