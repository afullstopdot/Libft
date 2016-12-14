#include "../inc/libft.h"

/*
** This function returns a pointer to the last occurence of the chatacter c, or
** NULL if it does not find one.
*/

char		*ft_strrchr(const char *src, int c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	while (src[i])
	{
		if (src[i] == (unsigned char)c)
			ptr = ((char *)src) + i;
		i++;
	}
	return (ptr);
}
