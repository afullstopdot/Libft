#include "../inc/libft.h"

/*
** This function applies the function f (passed as param) to every 
** character of the str pointed to by s (passed as param). The function f takes
** the address of the character aswell as the index.
*/

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		f(&s[count], count);
		count++;
	}
}
