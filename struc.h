/*
** struc.h for struc in /home/puccio_c/rendu/PSU_2015_my_printf
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue Nov 10 13:05:09 2015 cyril puccio
** Last update Thu Nov 12 16:46:46 2015 cyril puccio
*/

#ifndef		_STRUCT_H
# define	_STRUCT_H

# include	<stdarg.h>

typedef struct	s_str
{
  char		c;
  void		(*ptr)(char *);
}		t_str;

typedef struct  s_int
{
  char          c;
  void          (*ptr)(int);
}		t_int;

typedef struct  s_char
{
  char          c;
  void          (*ptr)(char);
}		t_char;


void		put_str(char *);
void		put_nbr(int);
void		put_char(char);

#endif	/* _STRUCT_ */
