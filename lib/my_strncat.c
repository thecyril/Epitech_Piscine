/*
** my_strncat.c for strncat in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Mar 31 15:17:28 2016 cyril puccio
** Last update Sun Jun 12 11:36:38 2016 cyril puccio
*/

char    *my_strncat(char *dest, char *src, int nb)
{
  int   l;
  int   i;

  i = 0;
  l = my_strlen(dest);
  while (src[i] && nb != 0)
    {
      dest[l] = src[i];
      l++;
      i++;
      nb--;
    }
  dest[l] = 0;
  return (dest);
}
