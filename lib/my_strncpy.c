/*
** my_strncpy.c for my_strncpy in /home/puccio_c/rendu/Piscine_C_J06/ex_03
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct  5 10:07:55 2015 cyril puccio
** Last update Thu Oct 15 20:42:08 2015 cyril puccio
*/

char	*my_strncpy(char *dest, char *src, int nb)
{
  int	i;

  i = 0;
  while (src[i] && i < nb)
    {
      dest[i] = src[i];
      i++;
    }
  if (!src[nb - 1])
    dest[i] = '\0';
  return (dest);
}
