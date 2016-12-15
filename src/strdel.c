#include "../inc/libft.h"

/*
** This function takes as a parameter the address of a string that needs to be
** be freed with a call to free(3), then sets the pointer to null.
*/

void	ft_strdel(char **as)
{
	if (*as)
		free(*as);
	as = NULL;
}
