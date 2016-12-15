#include "../inc/libft.h"

/*
** This function compares the first n bytes (each interpreted as unsigned char
** of the memory areas s1 and s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((const char *)s1, (const char *)s2, n));
}
