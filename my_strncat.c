/*
** my_strncat.c for my_strncat in /home/puccio_c/rendu/Piscine_C_J07/ex_03
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Oct  8 12:41:32 2015 cyril puccio
** Last update Sat Oct 17 14:28:57 2015 cyril puccio
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	l;

  i = 0;
  l = my_strlen(dest);
  while (src[i] &&  i < nb)
    {
      dest[l + i] = src[i];
      i++;
    }
  return (dest);
}
