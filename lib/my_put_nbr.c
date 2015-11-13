/*
** my_put_nbr.c for my_put_nbr in /home/puccio_c/rendu/Piscine_C_J03
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Oct  2 11:34:25 2015 cyril puccio
** Last update Thu Nov 12 13:08:36 2015 cyril puccio
*/

void	my_put_nbr(int nb)
{
  if (nb < 0 && nb != 2147483647)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  if (nb < 0 && nb * (-1) -1 >= 2147483647)
    my_putstr("2147483648");
  if (nb > 10)
    {
      my_put_nbr(nb / 10);
      my_putchar(nb % 10 + 48);
    }
  else
    my_putchar(nb + 48);
}
