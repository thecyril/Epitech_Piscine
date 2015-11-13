/*
** my_strcat.c for my_strcat in /home/puccio_c/rendu/Piscine_C_J07/ex_02
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 23:29:15 2015 cyril puccio
** Last update Mon Oct 12 09:21:03 2015 cyril puccio
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	l;

  i = 0;
  l = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[l + i] = src[i];
      i++;
    }
  return (dest);
}
