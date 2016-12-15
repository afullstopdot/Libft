#include "../inc/libft.h"

/*
** This function copies n bytes from memory area src to dest. Unlike memcpy, 
** the memory areas may overlap: copying takes place as thought the bytes in src
** are first copied into a temp array that does not overlap src or dest, and 
** then the bytes are then copied from the tmp array to dest.
*/

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	copy[n];

	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	return (dest);
}
