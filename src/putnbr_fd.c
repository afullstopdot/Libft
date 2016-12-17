#include "../inc/libft.h"

/*
** Outputs the number n passed as an argument to the file descriptor passed as
** an argument.
*/

void		ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	if (nbr)
	{
		ft_putstr_fd(nbr, fd);
		ft_strdel(&nbr);
	}
}
