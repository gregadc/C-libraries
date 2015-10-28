/*
** fondation.c for fondation in /Users/amorimgregory/Documents/projet_fondation
** 
** Made by Amorim Gregory
** Login   <amorim_g@etna-alternance.net>
** 
** Started on  Fri Feb  6 16:39:16 2015 Amorim Gregory
** Last update Fri Feb  6 16:39:27 2015 Amorim Gregory
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int	    my_strlen(char *str);
char	*my_strdup(char *src);
char	*my_strcpy(char *dest, char *src);
void    my_putstr(char *str);
void    my_putchar(char c);
void	my_put_nbr(int n);
int  	my_strcmp(char *s1, char *s2);


typedef struct s_liste t_liste;
struct s_liste
{
	char *data;
    t_liste *suivant;

};

int    display_list(t_liste *liste, int count);
void    count_element(t_liste *liste);
int count_table(t_liste *liste);
t_liste    *add_list(t_liste *l, char *str);
t_liste *delete_list(t_liste *liste);
t_liste    *reverse(t_liste *list);
int count(t_liste *liste);
char search(t_liste *liste, char *str);
t_liste   *delete_one_element(t_liste *liste, char *str);
void  in_display(t_liste *tmp, int count);



