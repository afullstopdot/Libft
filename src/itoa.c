#include "../inc/libft.h"

/*
** This function allocats memory with a call to malloc(3) and returns a fresh
** string representing the integer n given as an argument. Negative numbers inc
**
** notes - i free all memory i play with, however i expect to never use more 
** then 35 chcarcaters, minor flaw cause i might enever use the whole of it.
** This is an implementation of itoa_base with the base always being 10 so i get
** the value i require..
*/

static void	ft_convert(int n, int b, char *ascii, int *index, char *base_char)
{
	if (base_char)
	{
		if (n <= -b || b <= n)
			ft_convert(n / b, b, ascii, index, base_char);
		ascii[(*index)++] = base_char[ft_abs(n % b)];
	}
}

char		*ft_itoa(int n)
{
	char	*ascii;
	char	*base_char;
	int		index;

	index = 0;
	ascii = ft_strnew(35);
	base_char = ft_strdup("0123456789ABCDEF");
	if (ascii && base_char)
	{
		if (n < 0)
			ascii[index++] = '-';
		ft_convert(n, 10, ascii, &index, base_char);
		ft_strdel(&base_char);
	}
	return (ascii);
}
