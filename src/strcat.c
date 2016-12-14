#include "../inc/libft.h"

/*
** This function appends the src string to the dest string
*/

char		*ft_strcat(char *dest, const char *src)
{
	size_t	len;

	len = ft_strlen((char *)src);
	if (len > 0)
		ft_strncat(dest, src, len);
	return (dest);
}
