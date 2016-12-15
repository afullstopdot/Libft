#include "../inc/libt.h"

/*
** Allocates with malloc and returns a fresh substring from string given as an
** argument. The substring begins at index start and is of size len. If start
** and len arent refering to a valid substring, the behavior is undefinded.
** If the allocation fails, the function returns null.
*/

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = ft_strnew(len);
	if (sub)
		ft_strncpy(sub, s + start, len);
	return (sub);
}
