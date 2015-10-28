/*
** my_putchar.c for my_putchar in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 12:58:40 2014 AMORIM Greg
** Last update Wed Oct 29 13:27:29 2014 AMORIM Greg
*/

#include <unistd.h>
#include "parse.h"
void	my_putchar(char c)
{
  write(1, &c, 1);
}
