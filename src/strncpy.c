#include "../inc/libft.h"

/*
** Similar to strcpy except that at most n bytes of src are copied into dest, if
** the length of src is less than the length of n strncpy writes additional null
** bytes to dest
*/

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = ft_strlen((char *)dest);
	j = ft_strlen((char *)src);
	if (i >= j)
	{
		while (src[k] && k < n)
		{
			dest[k] = ((char *)src)[k];
			k++;
		}
		while (k < n)
			dest[k++] = '\0';
	}
	return (dest);
}
