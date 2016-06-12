/*
** my_strcat.c for my_strcat in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sun Apr  3 19:13:08 2016 cyril puccio
** Last update Sun Jun 12 11:36:04 2016 cyril puccio
*/

char	*my_strcat(char *dest, char *src)
{
  char	*result;
  int	len;
  int	i;

  i = 0;
  len = 0;
  result = xmalloc(my_strlen(dest) + my_strlen(src) + 1);
  while (dest[i])
    {
      result[i] = dest[i];
      i++;
    }
  while (src[len])
    {
      result[len + i] = src[len];
      len++;
    }
  result[len + i] = '\0';
  return (result);
}
