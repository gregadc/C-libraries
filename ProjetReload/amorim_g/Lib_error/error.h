/*
** fondation.c for fondation in /Users/amorimgregory/Documents/projet_fondation
** 
** Made by Amorim Gregory
** Login   <amorim_g@etna-alternance.net>
** 
** Started on  Fri Feb  6 16:39:16 2015 Amorim Gregory
** Last update Fri Apr 24 16:47:14 2015 Amorim Gregory
*/

#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>

void    my_putstr(char *str);
int  	my_strcmp(char *s1, char *s2);
int     verif();
int     error();
int	    my_strlen(char *str);
int     display(int f, char *er);
