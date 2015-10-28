/*
** my_strcmp.c for my_strcmp in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 13:01:06 2014 AMORIM Greg
** Last update Wed Oct 29 11:41:02 2014 AMORIM Greg
*/

int	my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}
