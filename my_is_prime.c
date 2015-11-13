/*
** my_is_prime.c for my_is_prime in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 10:53:28 2015 cyril puccio
** Last update Thu Oct 15 18:17:50 2015 cyril puccio
*/

int     my_is_prime(int nb)
{
  int   i;

  i = 2;
  if (nb == 0 || nb == 1)
    return (0);
  while (i < nb)
    {
      if (nb % i == 0)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
