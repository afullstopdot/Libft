#include "../inc/libft.h"

/*
** Set the first n bytes of the memory area pointed to by src to zero ('\0')
*/

void	ft_bzero(void *src, size_t n)
{
	ft_memset(src, '\0', n);
}
