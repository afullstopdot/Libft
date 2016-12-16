#include "../inc/libft.h"
#include <stdio.h>
/*
** This function allocates memory with a call to malloc(3) and returns a fresh
** array of null terminated strings including the array itself. The strings
** are obtained by spliting s using the delimeter c. If the memory allocation 
** fails function returns NULL.
*/
static int	ft_arr_size(char const *s, char c)
{
	int		size;
	int		count;

	size = 0;
	count = 0;
	if (!ft_strchr(s, c))
		return (1);
	while (s[count])
	{
		if (s[count] != c && s[count + 1] == c)
		{
			size++;
			break;
		}
		count++;
	}
	while (s[count])
	{
		if (s[count] == c && s[count+ 1] && s[count + 1] != c)
			size++;
		count++;
	}
	return (size);
}

static char	*ft_get_next_word(char *s, char c, int *start)
{
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		start;
	int		size;
	int		count;

	start = 0;
	count = 0;
	size =  ft_arr_size(s,c);
	if (size > 0)
	{
		if ((arr = (char **)ft_memalloc(sizeof(char *) * size + 1)))
		{
			while (count < size)
				arr[count++] = ft_get_next_word(s, c, &start);
		}
	}
	return (arr);
}

