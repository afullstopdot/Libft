#include "../inc/libft.h"

/*
** This function applies the function f to each character of the string given as
** an argument to create a fresh new string with a call to malloc(3) resulting
** from the successive applications of f.
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	count;

	count = 0;
	new = ft_strnew(ft_strlen((char *)s));
	if (new)
	{
		while (s[count])
		{
			new[count] = f(s[count]);
			count++;
		}
	}
	return (new);
}
