#include "../inc/libft.h"

/*
** This function does a lexicographical comparison of noth strings and returns 
** 1 0r 0 depending of whether the strings are equal.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}
