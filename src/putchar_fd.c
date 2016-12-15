#include "../inc/libft.h"

/*
** Print a character to the file descriptor passed as an argument.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
