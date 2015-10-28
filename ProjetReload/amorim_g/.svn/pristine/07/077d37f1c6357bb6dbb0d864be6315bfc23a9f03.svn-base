/*
** my_strcmp.c for my_strcmp in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 13:01:06 2014 AMORIM Greg
** Last update Wed Oct 29 11:41:02 2014 AMORIM Greg
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct		s_arg
{
	char		*option;
	char		*argument;
 
	struct	s_arg	*suivant;
}			t_arg;

typedef struct			s_option
{
	char			*option;
	struct	s_option	*suivant;
}				t_option;


int		    args_and_opts(t_option *opt, char *valeur);
void 		my_putchar(char c);
t_option	*append_options(t_option *opt, char *str);
t_option	*delete_options(t_option *list);
t_arg		*parsing(int argc,char *argv[],t_option *opt);
t_arg		*argument_add(t_arg *arg, t_option *opt, char *my_arg);
void		my_putstr(char *str);
void		display_args(t_arg *list);
void		my_put_nbr(int n);
t_arg		*delete_arguments(t_arg *list);
void		display_opts(t_option *list);
int		    my_strcmp(char *s1, char *s2);

