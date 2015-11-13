/*
** my_strcpy.c for my_strcpy in /home/puccio_c/rendu/Piscine_C_J06/ex_02
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct  5 09:24:33 2015 cyril puccio
** Last update Mon Oct 19 12:30:00 2015 cyril puccio
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
