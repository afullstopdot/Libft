#include "../inc/libft.h"

/*
** Prints a string to standard output
*/

void		ft_putstr(char const *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		ft_putchar(str[count++]);
}
