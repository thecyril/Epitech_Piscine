/*
** my_str_isalpha.c for my_str_isalpha in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/lib/my/src
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sun Apr 10 13:06:27 2016 cyril puccio
** Last update Sun Jun 12 11:36:26 2016 cyril puccio
*/

int     my_str_isalpha(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) ||
          str[i] == 32)
        j++;
      i++;
    }
  if (j == my_strlen(str))
    return (1);
  else
    return (0);
}
