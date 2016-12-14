#include "../inc/libft.h"

/*
** This funtion fills the first n bytes of memory area pointed to by src with
** the constant byte c.
*/

void		*memset(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
		((unsigned char *)src)[i++] = c;
	return (src);
}
