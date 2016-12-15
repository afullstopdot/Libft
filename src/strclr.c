#include "../inc/libft.h"

/*
** This function sets every character of the string passes to the value '\0'
*/

void	ft_strclr(char *s)
{
	ft_bzero((void *)s, ft_strlen(s));
}
