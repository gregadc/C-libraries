/*
** my_getnbr.c for my_getnbr in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 12:38:07 2014 AMORIM Greg
** Last update Wed Oct 29 18:55:25 2014 AMORIM Greg
*/

#include <stdio.h>
int	minus_or_plus(char *str);
int	my_getnbr(char *str);

int	minus_or_plus(char *str)
{
  int i;
  int count_int;

  i = 0;
  count_int = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	count_int = count_int + 1;
      i = i + 1;
    }
  count_int  = count_int % 2;
  if (count_int  == 1 )
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int i;
  int result;

  i = 0;
  result = 0;
  while (str[i] == '-' || str[i] == '+')
  i = i + 1;
  while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
	  result = (str[i] - '0') + result * 10;
	  i  = i + 1;
	}
  if (minus_or_plus(str) == 1)
    {
      result = result * (-1);
      return (result);
    }
  else
    return (result);
}
