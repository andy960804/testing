NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC_CHAR = ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_isspace.c \
		   ft_tolower.c \
		   ft_toupper.c

SRC_CONVERSION = ft_atoi.c \
				 ft_itoa.c

SRC_MEMORY = ft_bzero.c \
			 ft_calloc.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c

SRC_PRINT = ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c

SRC_STR = ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c

SRCS = $(SRC_CHAR) \
	   $(SRC_CONVERSION) \
	   $(SRC_MEMORY) \
	   $(SRC_PRINT) \
	   $(SRC_STR)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(BONUS_OBJS): $(BONUS_SRCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(EXTRA_OBJS): $(EXTRA_SRCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME):
	$(CC) $(CFLAGS) -I . -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	-rm $(OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
