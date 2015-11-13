/*
** my_strncmp.c for my_strncmp in /home/puccio_c/rendu/Piscine_C_J06/ex_07
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 17:29:35 2015 cyril puccio
** Last update Wed Oct  7 23:24:35 2015 cyril puccio
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n > 1)
    {
      i++;
      n--;
    }
  return (s1[i] - s2[i]);
}
