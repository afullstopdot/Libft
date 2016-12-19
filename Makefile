# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarquez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 09:23:44 by amarquez          #+#    #+#              #
#    Updated: 2016/12/19 09:35:59 by amarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
COMPILED = 	ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
			ft_isprint.o ft_memset.o ft_strcmp.o ft_strcpy.o ft_strdup.o\
			ft_strlen.o ft_strncmp.o ft_strncpy.o ft_tolower.o ft_toupper.o\
			ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o \
			ft_strstr.o ft_strnstr.o ft_memalloc.o ft_strnew.o ft_memdel.o\
			ft_strdel.o ft_strclr.o ft_memcmp.o ft_memchr.o ft_memcpy.o\
			ft_memccpy.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o\
			ft_strequ.o ft_strnequ.o ft_putchar.o ft_putstr.o ft_putendl.o \
			ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_strsub.o\
			ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putnbr.o\
			ft_putnbr_fd.o ft_atoi.o ft_memmove.o ft_lstnew.o ft_lstdelone.o\
			ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o
			

all: $(NAME)

$(NAME): $(COMPILED)
	@ar rc $(NAME) $(COMPILED)
	@ranlib $(NAME)
	@echo "\033[92mlibft.a created successfully.\033[0m"

$(COMPILED): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@-/bin/rm -f $(COMPILED)
	@echo "\033[92mObject files removed successfully.\033[0m"

fclean: clean
	@-/bin/rm -f $(NAME)
	@echo "\033[92mlibft.a removed successfully.\033[0m"

re: fclean all

count:
	@echo '# of files:'
	@ls |  wc -l
