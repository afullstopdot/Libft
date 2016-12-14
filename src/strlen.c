#include "../inc/libft.h"

/*
** The length returned does not included the null termiating character
*/

size_t		ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
