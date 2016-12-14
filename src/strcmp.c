#include "../inc/libft.h"

/*
** This function compares two strings s1 and s2 and returns an integer less than
** greater than or equal to depending on whether the strs match etc.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}
