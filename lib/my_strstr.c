/*
** my_strstr.c for my_strstr in /home/puccio_c/rendu/Piscine_C_J06/ex_05
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon Oct  5 13:16:54 2015 cyril puccio
** Last update Thu Nov  5 14:49:58 2015 cyril puccio
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	n;
  int	check;

  i = 0;
  n = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[0])
	{
	  check = 1;
	  while (to_find[n] != '\0')
	    {
	      if (str[i + n] != to_find[n])
		check = 0;
	      n++;
	    }
	  if (check == 1)
	    return (str + i);
	}
      i++;
    }
  return (0);
}
