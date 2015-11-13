/*
** my_strcapitalize.c for my_strcapitalize in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:12:36 2015 cyril puccio
** Last update Fri Oct 16 18:42:59 2015 cyril puccio
*/

char    *my_strcapitalize(char *str)
{
  int   i;

  i = 1;
  my_strlowcase(str);
  if (str[0] >= 97 && str[0] <= 122)
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= ' ' && str[i] <= '/') || (str[i] <= '@' && str[i] >= ':'))
        if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
          str[i + 1] = str[i + 1] - 32;
      i++;
    }
  return (str);
}
