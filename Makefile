CC			=	gcc

SRC			=	./src/reader.c\
				./src/analyzer.c\
				./src/my_strlen.c\
				./src/my_putstr.c

MAIN		=	main.c

CFLAGS		=	-Wall -Wextra -Werror

OBJ			=	$(SRC:.c=.o)

RM			=	rm -f

NAME		=	compiler

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(MAIN) $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all