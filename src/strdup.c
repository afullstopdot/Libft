#include "../inc/libft.h"

/*
** This function returns a pointer to a new string which is a duplicate of the 
** string pointed to by src. The string is created dynamically using malloc and 
** therefor can be free'd with a call to free to avoid mem leaks.
**
** As per WTC norm, implicit type casts are forbidden and result in norminette
** failure and ulimatley project failure.
*/

char		*ft_strdup(const char *src)
{
	char	*str;
	int		len;

	len = ft_strlen((char *)src) + 1;
	str =  (char *)malloc(sizeof(len));
	if (str)
	{
		str = ft_strcpy(str, src);
		return (str);
	}
	return (NULL);
}
