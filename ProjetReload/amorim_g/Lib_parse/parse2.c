/*
** my_strcmp.c for my_strcmp in /home/amorim_g/semaine03/amorim_g/libmy_02
**
** Made by AMORIM Greg
** Login   <amorim_g@etna-alternance.net>
**
** Started on  Mon Oct 27 13:01:06 2014 AMORIM Greg
** Last update Wed Oct 29 11:41:02 2014 AMORIM Greg
*/

#include "parse.h"

t_option    *append_options(t_option *opt, char *str)
{
    t_option	*nouvelElement;
    
    nouvelElement = malloc(sizeof(t_option));
    if (!nouvelElement)
        return NULL;
     nouvelElement->option = str;
     nouvelElement->suivant = opt;
     return (nouvelElement);
}


t_arg   *delete_arguments(t_arg *list)
{
	t_arg	*tmp;
   
    while (list != NULL)
	   {
	       tmp = list->suivant;
		   free(list);
		   list = tmp;
	   }
    return (list);
}

t_option    *delete_options(t_option *list)
{
    t_option    *tmp;
    
    while (list != NULL)
    {
        tmp = list->suivant;
        free(list);
        list = tmp;
    }
    return (list);
}

t_arg   *argument_add(t_arg *arg, t_option *opt, char *my_arg)
{
    t_arg	*nouvelElement;
    
    nouvelElement = malloc(sizeof(t_arg));
    if (!nouvelElement)
        return NULL;
    nouvelElement->option = opt->option;
    nouvelElement->argument = my_arg;
    nouvelElement->suivant = arg;
    return (nouvelElement);
}

int    main(int argc, char *argv[])
{
    int i;
    t_option *o = NULL;
    t_arg *arg = NULL;
    
    for (i = 1; i < 10; i++)
        {
            o = append_options(o, "-a");
            o = append_options(o, "-b");
            o = append_options(o, "-c");
        }
    arg = parsing(argc, argv, o);
    display_args(arg);
    arg = delete_arguments(arg);
    delete_options(o);
    return 0;
}