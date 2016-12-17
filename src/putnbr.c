#include "../inc/libft.h"

/*
** This function displays the number n (passed as an argument to stdout
*/

void		ft_putnbr(int n)
{
	char	*nbr;

	nbr = ft_itoa(n);
	if (nbr)
	{
		ft_putstr(nbr);
		ft_strdel(&nbr);
	}
}
