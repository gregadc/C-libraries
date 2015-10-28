/*
** my_put_nbr.c for my_put_nbr in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 13:04:08 2014 AMORIM Greg
** Last update Wed Oct 29 15:45:24 2014 AMORIM Greg
*/


#include "parse.h"

void	my_putchar(char c);
void	my_putstr(char *str);

void	my_put_nbr(int n)
{
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      int  x;

      x = 1;
      if (n < 0)
	{
	  n = -n;
	  my_putchar('-');
	}
      while (n / x > 9)
	{
	  x = x * 10;
	}
      while (x != 0)
	{
	  my_putchar('0' + (n / x) % 10);
	  n = n % x;
	  x = x /10;
	}
    }
}
