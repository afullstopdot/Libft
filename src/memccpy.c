#include "../inc/libft.h"

/*
** The memccpy() function copies no more than n bytes from memory area src to 
** memory area dest, stopping when the character c is found.
**
** If the memory areas overlap, the results are undefinded.
**
** The function returns a pointer to the next character in dest after c, or NULL
** if c was not found in the first n character of src.
*/

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t			count;

	s = (unsigned char *)src;
	count = 0;
	while (s[count] && count < n)
	{
		if (s[count] == c)
			return (dest + count);
		((unsigned char *)dest)[count] = s[count];
		count++;
	}
	return (NULL);
}
