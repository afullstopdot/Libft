#include "../inc/libft.h"

/*
** Similar to strcpy except that at most n bytes of src are copied into dest, if
** the length of src is less than the length of n strncpy writes additional null
** bytes to dest
*/

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	k;

	k = 0;
	while (src[k] && k < n)
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
		dest[k++] = '\0';
	return (dest);
}
