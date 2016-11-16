NAME = libft.a
FILENAMES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_itoa ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memdel ft_memmove ft_memset ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy ft_strcspn ft_strdel ft_strdup ft_strequ ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlen ft_strmap ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnstr ft_strrchr ft_strsplit ft_strspn ft_strstr ft_strsub ft_strtrim ft_tolower ft_toupper ft_wordcount
CFILES = $(addsuffix .c, $(FILENAMES))
OFILES = $(addsuffix .o, $(FILENAMES))

all: $(NAME)

$(NAME):
	gcc -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
