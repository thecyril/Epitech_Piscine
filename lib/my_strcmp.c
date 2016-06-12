/*
** my_strcmp.c for my_strcmp in /home/puccio_c/rendu/Piscine_C_J06/ex_06
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 14:21:33 2015 cyril puccio
** Last update Tue Apr 12 17:02:39 2016 cyril puccio
*/

int     my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    i++;
  return (s1[i] - s2[i]);
}
