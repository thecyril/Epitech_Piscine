/*
** my_isneg.c for my_isneg.c in /home/puccio_c/rendu/Piscine_C_J03
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Sep 30 11:42:00 2015 cyril puccio
** Last update Thu Oct  1 18:16:43 2015 cyril puccio
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (0);
}
