#include "../inc/libft.h"

/*
** Make this function then just use this one to create strstr
*/

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	needle_len;
	size_t	count;
	size_t	i;

	needle_len = ft_strlen((char *)needle);
	hay = (char *)haystack;
	count = 0;
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while (*hay && i <= len)
	{
		while (haystack[count] == needle[count])
		{
			if (!needle[count])
				return (hay);
			count++;
		}
		hay++;
		i++;
	}
	return (NULL);
}
