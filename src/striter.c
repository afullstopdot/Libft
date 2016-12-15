#include "../inc/libft.h"

/*
** This function applies the function f passed as a parameter to every character
** of the string passed as a parameter, the characters are passed  by address
** to the function f to be modified if necessary.
*/

void		ft_striter(char *s, void (*f)(char *))
{
	size_t	count;

	count = 0;
	while (s[count])
		f(&(s[count++]));
}
