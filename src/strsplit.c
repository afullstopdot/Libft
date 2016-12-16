#include "../inc/libft.h"

/*
** This function allocates memory with a call to malloc(3) and returns a fresh
** array of null terminated strings including the array itself. The strings
** are obtained by spliting s using the delimeter c. If the memory allocation 
** fails function returns NULL.
**
** when you free the array of strings dont forget to individually free the 
** strings and then the arrays that hold them.
*/

static int	ft_arr_size(char const *s, char c)
{
	int		size;
	int		count;

	size = 0;
	count = 0;
	while (s[count] && s[count] == c)
		count++;
	while (s[count])
	{
		while (s[count] && s[count] != c)
			count++;
		size++;
		while (s[count] && s[count] == c)
			count++;
	}
	return (size);
}

static char	*ft_get_next_word(char *s, char c, int *start)
{
	char	*word;
	char	*end;
	int		len;

	word = NULL;
	len = 0;
	if (!(end = ft_strchr(s + *start, c)))
		end = ft_strchr(s, '\0');
	if ((len = end - (s + *start)) > 0)
	{
		word = ft_strsub(s, *start, len);
		*start += len;
	}
	return (word);	
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
			while (count <size)
			{
				while (s[start] == c)
					start++;
				arr[count++] = ft_get_next_word((char *)s, c, &start);
			}
		}
	}
	return (arr);
}
