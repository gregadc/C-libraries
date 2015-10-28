CC = gcc
NAME = library_error.a
SRC =         main.c      \
	          my_putstr.c  \
	          my_strcmp.c  \
	          my_strlen.c  \

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