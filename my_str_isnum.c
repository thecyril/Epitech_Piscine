/*
** my_str_isnum.c for my_isnum in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:21:58 2015 cyril puccio
** Last update Fri Oct 16 18:45:28 2015 cyril puccio
*/

int     my_str_isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 48 && str[i] <= 57)
	i++;
      else
	return (0);
    }
  return (1);
}
