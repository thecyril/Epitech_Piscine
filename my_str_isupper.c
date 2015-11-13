/*
** my_str_isupper.c for my_str_isupper in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:23:24 2015 cyril puccio
** Last update Thu Nov  5 14:34:17 2015 cyril puccio
*/

int     my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z' || str[i] == ' ')
        i++;
      else
        return (0);
    }
  return (1);
}
