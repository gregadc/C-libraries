/*
** fondation.c for fondation in /Users/amorimgregory/Documents/projet_fondation
** 
** Made by Amorim Gregory
** Login   <amorim_g@etna-alternance.net>
** 
** Started on  Fri Feb  6 16:39:16 2015 Amorim Gregory
** Last update Thu Apr 23 11:54:11 2015 Amorim Gregory
*/

#include "liste.h"

int    count(t_liste *liste)
{
  int n=0;
  while(liste)
  {
    n++;
    liste = liste->suivant;
  }
 return n;
}


int    count_table(t_liste *liste)
{
  int val_1;
  int val_2;
  t_liste *tmp;
  tmp = liste;
  val_2 = 0;

  while (tmp != NULL)
  {
    val_1 = my_strlen(tmp->data);
    tmp = tmp->suivant;
    if (val_1 > val_2)
      val_2  = val_1;
  }
 return val_2;
}


void    count_element(t_liste *liste)
{
  t_liste *tmp;
  tmp = liste;
  while (tmp != NULL)
  {
    my_put_nbr(my_strlen(tmp->data));
    tmp = tmp->suivant;
  }
}


t_liste    *reverse(t_liste *list)
{
  t_liste *inverse;
  t_liste *suivant;

  inverse = NULL;
  while (list != NULL)
    {
      suivant = list->suivant;
      list->suivant = inverse;
      inverse = list;
      list = suivant;
    }
  return (inverse);
}


char    search(t_liste *liste, char *str)
{
  t_liste *tmp;
  tmp = liste;
  char *t;
  int n;
  n = 1;
  my_putstr("Cherche : ");
  my_putstr(str);
  my_putstr("\n");
  while (tmp != NULL)
    {
      t = tmp->data;
      if (my_strcmp(t, str) == 0)
      {
        my_put_nbr(n);
        my_putstr("eme maillon \n");
        return (0);
      }
      else
        my_putstr("\033[31mNot found.\033[0m\n");
      n++;
      tmp = tmp->suivant;
    }
 return (0);
}
