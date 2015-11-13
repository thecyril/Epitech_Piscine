/*
** my_strupcase.c for my_strupcase in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:09:40 2015 cyril puccio
** Last update Fri Oct 16 17:05:40 2015 cyril puccio
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 97 && str[i] <= 122)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
