##
## Makefile for Makefile in /home/puccio_c/rendu/Piscine_C_J10/lib/my
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Fri Oct  9 18:40:22 2015 cyril puccio
## Last update Tue Dec 15 03:33:57 2015 cyril puccio
##

SRC	= my_putchar.c		\
	  my_putstr.c		\
	  my_str_isnum.c	\
	  my_strlen.c		\
	  my_strcmp.c		\
	  my_nbrcmp.c		\
	  number.c		\
	  my_put_nbr.c		\
	  sum_stdarg.c		\
	  disp_stdarg.c		\
	  my_putnbr_base.c	\
	  my_strcpy.c		\
	  my_str_isprintable.c	\
	  my_find_prime_sup.c	\
	  my_getnbr.c		\
	  my_isneg.c		\
	  my_is_prime.c		\
	  my_is_prime_sup.c	\
	  my_power_rec.c	\
	  my_revstr.c		\
	  my_showmen.c		\
	  my_showstr.c		\
	  my_sort_int_tab.c	\
	  my_square_root.c	\
	  my_strcapitalize.c	\
	  my_strcat.c		\
	  my_str_isalpha.c	\
	  my_str_islower.c	\
	  my_str_isupper.c	\
	  my_strlcat.c		\
	  my_strlowcase.c	\
	  my_strncat.c		\
	  my_strncmp.c		\
	  my_strncpy.c		\
	  my_strstr.c		\
	  my_strupcase.c	\
	  my_swap.c		\

FLAGS   += -Wextra -Wall -Werror
CFLAGS  += -I.

NAME	=	libmy.a

CC	= 	cc

OBJ	=	 $(SRC:.c=.o)

HEADER	=	 my.h

all	:	$(NAME)

$(NAME) :	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -r $(NAME)

re	:	fclean	all

.PHONY	: all clean fclean re
