/*
** my_strncmp.c for my_strncmp in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sun Apr  3 13:11:57 2016 cyril puccio
** Last update Sun Jun 12 11:36:58 2016 cyril puccio
*/

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (i < n)
    {
      if (s1[i] != s2[i])
        return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
