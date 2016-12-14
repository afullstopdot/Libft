#ifndef LIBFT_H
# define LIBFT_H

/*
** Re-coding basic C functions, if this is in my repository. This will be 100%
**
** Define Headers, only allowed to use malloc, free and write
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
** generic functions
*/

void	*ft_memset(void *src, int c, size_t n);
void	ft_bzero(void *src, size_t n);

/*
** character functions, checking if they fall under certain rules.
*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** string functions.
*/

size_t	ft_strlen(char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);

#endif
