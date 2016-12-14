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
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *src, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
