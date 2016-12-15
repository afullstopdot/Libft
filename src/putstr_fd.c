#include "../inc/libft.h"

/*
** Print a string to the fd passed as an argument
*/

void		ft_putstr_fd(char const *s, int fd)
{
	size_t	count;

	count = 0;
	while (s[count])
		ft_putchar_fd(s[count++], fd);
}
