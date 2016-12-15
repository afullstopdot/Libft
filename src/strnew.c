#include "../inc/libft.h"

/*
** This function allocates memory with a call to malloc(3) and returns a fresh
** string thats null terminated. Each characters of the string is initialized
** at '\0'. If the allocation fails the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size));
}
