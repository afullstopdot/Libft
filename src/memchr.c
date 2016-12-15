#include "../inc/libft.h"

/*
** This function scans the initial n bytes of the memory area pointed to by s
** for the first byte instance of c. Both c and the bytes of memory pointed to 
** by s are interpreted as unsigned char.
*/

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	instance;
	size_t			count;

	mem = (unsigned char *)s;
	instance = (unsigned char)c;
	count = 0;
	while (mem[count] && count < n)
	{
		if (mem[count] == instance)
			return ((void *)s + count);
		count++;
	}
	return (NULL);
}
