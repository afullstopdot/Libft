#include "../inc/libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	if (*ap)
		ap = NULL;
}
