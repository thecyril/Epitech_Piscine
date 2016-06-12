/*
** my_str_isnum.c for my_str_isnum in /home/puccio_c/rendu/Prog_Elem/CPE_2015_Allum1
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Feb 17 15:56:11 2016 cyril puccio
** Last update Thu Feb 18 11:35:35 2016 cyril puccio
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
