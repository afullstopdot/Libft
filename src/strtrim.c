#include "../inc/libft.h"

/*
** This function allocates and returns a copy of the string given as an 
** an argument without whitespaces at the beginning or at the end of the string.
** ' ', '\n' and '\t' are considered as whitespace. If there is no whitespace
** strtrim returns a copy of the string passed as an argument. If th allocation
** fails, NULL is returned.
*/

static int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static unsigned	int	*ft_start_end(char const *s)
{
	unsigned int	*start_end;

	if ((start_end = (unsigned int *)malloc(sizeof(unsigned int) * 2)))
	{
		start_end[0] = 0;
		start_end[1] = ft_strlen((char *)s) - 1;
		while (s[start_end[0]])
		{
			if (!ft_isspace(s[start_end[0]]))
				break;
			start_end[0]++;
		}
		while (start_end[1] > 0)
		{
			if (!ft_isspace(s[start_end[1]]))
				break;
			start_end[1]--;
		}
	}
	return (start_end);
}

char				*ft_strtrim(char const *s)
{
	char			*copy;
	unsigned int	*start_end;
	int				len;

	copy = NULL;
	start_end = NULL;
	len = 0;
	if (s)
	{
		if ((start_end = ft_start_end(s)))
		{
			len = start_end[1] - start_end[0] + 1;
			copy = ft_strsub(s, start_end[0], len);
		}
	}
	return (copy);
}
