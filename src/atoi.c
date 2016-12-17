#include "../inc/libft.h"

/*
** This function converts the initial portion of the string pointed to by nptr
** to int. The behaviour is the same as strtoi except that atoi does not detect
** erros.
*/

int			ft_atoi(const char *str)
{
	char	*ascii;
	int		index;
	int		n;
	int		negative;

	index = 0;
	n = 0;
	negative = FALSE;
	ascii = ft_strtrim(str);
	if (ascii)
	{
		if (ascii[index] == '-')
		{
			negative = TRUE;
			index++;
		}
		else if (ascii[index] == '+')
			index++;
		while (ascii[index] && ft_isdigit(ascii[index]))
			n = (n * 10) + (ascii[index++] - '0');
		ft_strdel(&ascii);
		if (negative == TRUE)
			return (-(n));
	}
	return (n);
}
