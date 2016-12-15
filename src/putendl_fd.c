#include "../inc/libft.h"

/*
** This function prints a string to the fd passed with a newline.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
