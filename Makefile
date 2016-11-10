NAME = libft.a
SRCS = *.c

all: fclean $(NAME)

$(NAME):
	gcc -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
