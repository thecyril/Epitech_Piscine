/*
** my_power_rec.c for my_power_rec in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 10:43:37 2015 cyril puccio
** Last update Wed Oct 14 15:10:17 2015 cyril puccio
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
	return (0);
      if (power == 0)
	return (1);
      if (nb == 1)
	return (1);
      if (nb == -1 && power % 2 == 0)
	return (1);
      if (nb == -1 && power % 2 == 1)
	return (-1);
      if (power > 1)
	return (nb * my_power_rec(nb, power - 1));
      else
	return (nb);
}
