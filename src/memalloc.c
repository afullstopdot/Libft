#include "../inc/libft.h"

/*
** This function allocates memory with a call to malloc(3) and returns a fresh
** memory area. The memory area allocated is initialized to 0. If the allocation
** fails, the function returns NULL
*/

void		*ft_memalloc(size_t size)
{
	void	*mem;

	mem = NULL;
	if (size >= 1)
	{
		mem = malloc(size);
		if (mem)
			bzero(mem, size);
	}
	return (mem);
}
