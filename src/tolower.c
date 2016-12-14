#include "../inc/libft.h"

/*
** This function converts uppercase letter to its lowercase equivalent.
**
** Use of Decimal Ascii Values to determine whether character was uppercas
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c - 'A' + 'a');
	return (c);
}
