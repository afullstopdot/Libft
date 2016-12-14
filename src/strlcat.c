#include "../inc/libft.h"

/*
** This function copys and concatenates strings respectively. Designed to be 
** safer, more consistent, and less error prone replacement. Unlike strncat
** strlcat takes the full size of the buffer (not just the length) and guarantee
** to NILL-terminate the result (as long as there is atleast 1 byte free in dst)
**
** Both src and dst must be NULL-terminated.
*/

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*tmp_src;
	char		*tmp_dest;
	size_t		n;
	size_t		dlen;

	tmp_src = src;
	tmp_dest = dest;
	n = size;
	dlen = 0;
	while (n-- != 0 && *tmp_dest)
		tmp_dest++;
	dlen = tmp_dest - dest;
	if ((n = size - dlen) == 0)
		return (dlen + ft_strlen((char *)tmp_src));
	while (*tmp_src)
	{
		if (n != 1)
		{
			*tmp_dest = *tmp_src;
			n--;
		}
		tmp_src++;
	}
	tmp_dest = '\0';
	return (dlen + (tmp_src - src));
}
