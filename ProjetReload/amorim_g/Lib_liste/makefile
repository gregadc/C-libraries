CC = gcc
NAME = library_list.a
SRC =     my_strlen.c \
	      liste.c     \
	      main.c      \
	      my_putchar.c \
	      my_putstr.c  \
	      my_strcpy.c  \
	      my_strdup.c  \
              my_getnbr.c  \
	      my_put_nbr.c \
	      my_strcmp.c  \
	      liste2.c     \

OBJ = $(SRC:%.c=%.o)

RM  = rm -f

CFLAGS = -W -Wall -Werror 

$(NAME):        $(OBJ)
		$(CC) $(OBJ) -o $(NAME)
all:            $(NAME)

clean:
	$(RM) $(OBJ)

fclean:         clean
	$(RM) $(NAME)

re:     fclean all