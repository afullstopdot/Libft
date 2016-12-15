#include "../inc/libft.h"

/*
** This function copies n bytes from memory area src to memory area dest. The
** memory areas must not overlap.
*/

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	size_t			count;

	s = (unsigned char *)src;
	count = 0;
	while (s[count] && count < n)
	{
		((unsigned char *)dest)[count] = s[count];
		count++;
	}
	return (NULL);                                                               
}
