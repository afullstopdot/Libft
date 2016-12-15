#include "../inc/libft.h"

/*
** Find needle in the haystack and return the pointer of the beginning of the 
** haystack
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	return (ft_strnstr(haystack, needle, ft_strlen((char *)haystack)));
}
