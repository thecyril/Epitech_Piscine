/*
** my_revstr.c for my_revstr in /home/puccio_c/rendu/Piscine_C_J06/ex_04
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct  5 11:49:35 2015 cyril puccio
** Last update Tue Nov  3 11:49:45 2015 cyril puccio
*/

char    *my_revstr(char *str)
{
  int   i;
  int   j;
  char  c;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
