/*
** my_find_prime_sup.c for my_find_prime_sup in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Oct 15 18:39:12 2015 cyril puccio
** Last update Thu Oct 15 20:53:44 2015 cyril puccio
*/

int	my_find_prime_sup(int nb)
{
  int	nbsup;

  while ((nbsup = my_is_prime(nb)) == 0)
    nb++;
  return (nb);
}
