NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
COMPILED = 	bzero.o isalnum.o isalpha.o isascii.o isdigit.o isprint.o\
			memset.o strcmp.o strcpy.o strdup.o strlen.o strncmp.o\
			strncpy.o tolower.o toupper.o strcat.o strncat.o strlcat.o\
			strchr.o strrchr.o strstr.o strnstr.o memalloc.o strnew.o\
			memdel.o strdel.o strclr.o memcmp.o memchr.o memcpy.o\
			memccpy.o

all: $(NAME)

$(NAME): $(COMPILED)
	@ar rc $(NAME) $(COMPILED)
	@ranlib $(NAME)
	@echo "\033[92mLibft created successfully.\033[0m"

$(COMPILED): %.o: src/%.c
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@-/bin/rm -f $(COMPILED)
	@echo "\033[92mObject files removed successfully.\033[0m"

fclean: clean
	@-/bin/rm -f $(NAME)
	@echo "\033[92mLibft removed successfully.\033[0m"

re: fclean all

count:
	@echo '# of files:'
	@ls src/ |  wc -l
