#include "../inc/libft.h"

/*
** This function appends the src string to the dest string
*/

char		*ft_strcat(char *dest, const char *src)
{
	return (ft_strncat(dest, src, ft_strlen((char *)src)) + 1);
}
