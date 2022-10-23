# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 11:15:38 by mben-sal          #+#    #+#              #
#    Updated: 2022/10/23 17:08:25 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a

# HEADER = libft.h

# CC = gcc

# CFLAGS = -Wall -Werror -Wextra

# SRC = 	ft_atoi.c\
# 		ft_bzero.c\
# 		ft_calloc.c\
# 		ft_isalnum.c\
# 		ft_isalpha.c\
# 		ft_isascii.c\
# 		ft_isdigit.c\
# 		ft_isprint.c\
# 		ft_itoa.c\
# 		ft_memchr.c\
# 		ft_memcmp.c\
# 		ft_memcpy.c\
# 		ft_memmove.c\
# 		ft_memset.c\
# 		ft_putchar_fd.c\
# 		ft_putendl_fd.c\
# 		ft_putnbr_fd.c\
# 		ft_putstr_fd.c\
# 		ft_strchr.c\
# 		ft_strrchr.c\
# 		ft_strdup.c\
# 		ft_striteri.c\
# 		ft_strjoin.c\
# 		ft_strlcat.c\
# 		ft_strlcpy.c\
# 		ft_strlen.c\
# 		ft_strmapi.c\
# 		ft_strncmp.c\
# 		ft_strnstr.c\
# 		ft_strtrim.c\
# 		ft_substr.c\
# 		ft_tolower.c\
# 		ft_toupper.c

# OBJ = $(SRC:.c=.o)

# all : $(NAME)

# $(NAME) : $(OBJ) $(HEADER)
# 		$(CC) $(CFLAGS) $(SRC)
# 		ar -rc $(NAME) $(OBJ)
# 		ranlib $(NAME)

# clean : 
# 		rm -rf $(OBJ)

# fclean : clean 
# 		rm -rf $(NAME)

# re :	fclean all 

NAME =    libft.a
HEADER = libft.h

SRC =   ft_atoi.c\
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
        ft_strjoin.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_strtrim.c\
        ft_substr.c\
        ft_tolower.c\
        ft_toupper.c\
        ft_itoa.c\
        ft_strmapi.c\
        ft_striteri.c\
        ft_putchar_fd.c\
        ft_putstr_fd.c\
        ft_putendl_fd.c\
        ft_putnbr_fd.c\
		ft_split.c

OBJ =    $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
			$(CC) $(CFLAGS) -c $(SRC)
			ar -rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all