/*
** numer.c for number in /home/puccio_c/rendu/Piscine_C_evalexpr
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue Oct 20 14:04:26 2015 cyril puccio
** Last update Thu Oct 22 17:43:31 2015 cyril puccio
*/

int	number(char **str)
{
  int	result;

  result = 0;
  while (**str)
    {
      if (**str >= '0' && **str <= '9')
	result = ((result * 10) + (**str - 48));
      *str = *str + 1;
    }
  return (result);
}
