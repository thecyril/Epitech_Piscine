/*
** my_str_isalpha.c for my_isalpha in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:19:29 2015 cyril puccio
** Last update Fri Oct 16 18:38:54 2015 cyril puccio
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while	(str[i])
    {
      if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
	i++;
      else
	return (0);
    }
  return (1);
}
