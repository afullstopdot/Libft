#include "../inc/libft.h"

/*
** Lexicographical comparison between s1 and s2, if the strings are equal 1 or 0
** is returned.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}
