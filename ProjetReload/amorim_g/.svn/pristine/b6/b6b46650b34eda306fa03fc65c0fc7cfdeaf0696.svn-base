/*
** my_strdup.c for my_strdup in /home/amorim_g/semaine03/Jour07/amorim_g/my_strdup
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 16:36:52 2014 AMORIM Greg
** Last update Tue Oct 28 09:44:33 2014 AMORIM Greg
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *src)
{
  char *dest;

  dest = malloc(sizeof(char) * my_strlen(src) + 1);
  dest = my_strcpy(dest, src);
  return (dest);
}
