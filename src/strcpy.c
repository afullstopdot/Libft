#include "../inc/libft.h"

/*
** Copy the string pointed to by src, inc the null terminating character, to the
** buffer pointed to by dest. The dest str must be large enough, otherwise
** according to the man for strcpy, anything can happen.
*/

char		*ft_strcpy(char *dest, const char *src)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i >= j)
	{
		while (src[k])
		{
			dest[k] = (char *)src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (dest);
}
