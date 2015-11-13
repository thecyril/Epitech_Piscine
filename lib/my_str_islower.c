/*
** my_str_islower.c for my_str_islower in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:22:52 2015 cyril puccio
** Last update Thu Nov  5 14:46:30 2015 cyril puccio
*/

int     my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z' || str[i] == ' ')
	i++;
      else
	return (0);
    }
  return (1);
}
