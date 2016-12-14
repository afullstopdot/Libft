#include "../inc/libft.h"

/*
** This function returns the first occurence of the character represented by c
** or NULL if none is found.
*/

char		*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (unsigned char)c)
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
