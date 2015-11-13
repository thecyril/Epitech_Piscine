/*
** my_getnbr.c for my_getnbr in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Oct 15 20:06:58 2015 cyril puccio
** Last update Thu Oct 15 20:50:25 2015 cyril puccio
*/

int	isneg(char *str)
{
  int	i;
  int	counter;

  i = 0;
  counter = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
	counter++;
      i++;
    }
  if (counter % 2 == 0)
    return (0);
  else
    return (1);
}

int	is_num(char n)
{
  if (n >= '0' && n <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (is_num(str[i]) == 0)
    i++;
  while (is_num(str[i]) == 1)
    {
      nb = ((nb * 10) + (str[i] - 48));
      i++;
    }
  if (isneg(str) == 1)
    nb = nb * (-1);
  return (nb);
}
