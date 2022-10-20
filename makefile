NAME = Libft.a

HEADRE = Libft.h

SRC = ft_isalpha.c\
	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrch.c\
	ft_tolower.c\
	ft_toupper.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra 

all : $(NAME)

$(NAME) : $(OBJ) $(HEADRE)
		$(CC) $(CFLAGS)
		ar -rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean 
		rm -rf $(NAME)

re :	fclean clean all 
