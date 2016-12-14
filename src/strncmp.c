#include "../inc/libft.h"

/*
** This function compares two strings s1 and s2 but only the first n bytes and
** returns an integer less than greater than or equal to depending on whether 
** the strs match etc.
*/

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && (*s1 == *s2) && i <= n)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}
