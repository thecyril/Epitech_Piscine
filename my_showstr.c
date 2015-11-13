/*
** my_showstr.c for my_showstr in /home/puccio_c/rendu/Piscine_C_J07/lib/my
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Oct  7 11:26:49 2015 cyril puccio
** Last update Sun Oct 18 16:32:16 2015 cyril puccio
*/

int     my_showstr(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] > 126)
        {
          my_putchar('\\');
          if (str[i] < 14)
	    my_putchar('0');
          my_putnbr_base((str[i]), "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (0);
}
