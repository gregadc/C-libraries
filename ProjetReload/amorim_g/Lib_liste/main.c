/*
** fondation.c for fondation in /Users/amorimgregory/Documents/projet_fondation
** 
** Made by Amorim Gregory
** Login   <amorim_g@etna-alternance.net>
** 
** Started on  Fri Feb  6 16:39:16 2015 Amorim Gregory
** Last update Thu Apr 23 12:03:21 2015 Amorim Gregory
*/

#include "liste.h"

int    main()
{
  int c;
  t_liste *list = NULL;
  int cnt;
  my_putstr("\n");
  list = reverse(add_list(list, "greg amorim"));
  list = reverse(add_list(list, "tata"));
  list = reverse(add_list(list, "jojo la fripouille"));
  list = reverse(add_list(list, "Hello"));
  list = reverse(add_list(list, "Marco polo"));
  list = reverse(add_list(list, "kjgjyfhgfhgfgjhdhdjhkgkjfdhtdtujgykljfytdutygukdg"));
  c = count(list);
  cnt = count_table(list);
  display_list(list, cnt); 
  my_putstr("Votre liste contient ");
  my_put_nbr(c);
  my_putstr(" élèment(s).\n\n");
  search(list, "coco");
  search(list, "tata");
  my_putstr("\nDELETE ONE ELEMENT\n");
  list = delete_one_element(list,"greg amorim");
  display_list(list, cnt);
  my_putstr("\nDELETE ALL");
  list = delete_list(list);
  display_list(list, cnt);
  return (0);
}
