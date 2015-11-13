/*
** my_nbrcmp.c for my_nbrcmp in /home/puccio_c/rendu/Piscine_C_infinadd/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat Oct 31 15:29:46 2015 cyril puccio
** Last update Tue Nov  3 11:46:02 2015 cyril puccio
*/

int	my_nbrcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  if (my_strlen(str1) > my_strlen(str2))
    return (1);
  else if (my_strlen(str1) < my_strlen(str2))
    return (0);
  else if (my_strlen(str1) == my_strlen(str2))
    {
      while (str1[i] == str2[i] && str1[i] != '\0')
	i++;
      if (str1[i] > str2[i])
	return (1);
      else
	return (0);
    }
}
