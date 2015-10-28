/*
** fondation.c for fondation in /Users/amorimgregory/Documents/projet_fondation
** 
** Made by Amorim Gregory
** Login   <amorim_g@etna-alternance.net>
** 
** Started on  Fri Feb  6 16:39:16 2015 Amorim Gregory
** Last update Thu Apr 23 12:02:06 2015 Amorim Gregory
*/

#include "liste.h"

void    in_display(t_liste *tmp, int count)
{
  int i;
  int total;

  while (tmp != NULL)
    {
      my_putstr("+");
      for (i = 0; i < count; i++) 
        my_putstr("-");
      my_putstr("+");
      my_putstr("     +");
      my_putstr("\n");
      my_putstr("|");
      my_putstr(tmp->data);
      if (my_strlen(tmp->data) < count)
      {
        total = count - my_strlen(tmp->data) ;
        for (i = 0; i < total; i++) 
          my_putstr(" ");
      }
      my_putstr("|-----|");
      my_putstr("\n");
      tmp = tmp->suivant;
    }
}


int    display_list(t_liste *liste, int count)
{
  t_liste *tmp;
  tmp = liste;
  int i;

  if(tmp == NULL)
    return (0);
  in_display(tmp, count);
  my_putstr("+");
  for (i = 0; i < count; i++) 
    my_putstr("-");
  my_putstr("+     +---->\033[31mNULL\033[0m\n");
  return (0);
}


t_liste    *add_list(t_liste *l, char *str)
{
  t_liste *new_liste;
  new_liste = malloc(sizeof(t_liste));
  if (new_liste == NULL)
    //return (0);
    return NULL;
  new_liste->data = my_strdup(str);
  new_liste->suivant = l;
  return new_liste;
}

t_liste    *delete_one_element(t_liste *liste, char *str)
{
  if (liste == NULL)
    return NULL;
  if (my_strcmp(liste->data, str) == 0)
     {
       t_liste *tmp = liste->suivant;
       free(liste);
       tmp = delete_one_element(tmp, str);
       return tmp;
      }
  else
  {
    liste->suivant = delete_one_element(liste->suivant, str);
    return liste;
  }
}


t_liste    *delete_list(t_liste *liste)
{
  t_liste *tmp;
  while (liste != NULL)
  {
    tmp = liste->suivant;
    free(liste);
    liste = tmp;
  }
  if(liste == NULL)
    {
      my_putstr("\nList Deleted.\n");
      return (NULL);
    }
  return (liste);
}

