/*
** my_revstr.c for my_revstr in /home/puccio_c/rendu/Piscine_C_J06/ex_04
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct  5 11:49:35 2015 cyril puccio
** Last update Thu Oct 15 21:23:49 2015 cyril puccio
*/

char	*my_revstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  while (i >= 0)
    {
      str[i];
      i--;
    }
  return (str);
}
