/*
** my_puterror.c for my_puterror in /home/puccio_c/rendu/minishell/PSU_2015_minishell1/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Jan 20 11:21:03 2016 cyril puccio
** Last update Wed Jan 20 11:28:06 2016 cyril puccio
*/

void	my_puterror(char *str)
{
  while (*str)
    write(2, str++, 1);
}
