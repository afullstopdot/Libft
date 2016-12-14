#include "../inc/libft.h"

/*
** Function appends the src string to the dest string, overwriting the terminatin
** null byte at the end of dest, adding its own one at the end of dest. It will
** use at most n bytes to append.
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (i < n && src[i])
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';
	return (dest);
}
