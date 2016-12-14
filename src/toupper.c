#include "../inc/libft.h"

/*
** This function converts lowercase to uppercase equivalent if the character c
** is lowercase.
**
** Use of decimal ascii values to check whether the character passed is lowercase
** man ascii for more info
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 'a' + 'A');
	return (c);
}
