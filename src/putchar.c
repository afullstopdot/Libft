#include "../inc/libft.h"

/*
** Print a character on standard output
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
