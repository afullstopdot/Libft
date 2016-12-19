/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 08:54:56 by amarquez          #+#    #+#             */
/*   Updated: 2016/12/19 14:24:32 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = NULL;
	p2 = NULL;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack  && len >= 1)
	{
		if (*needle == *haystack)
		{
			p1 = (char *)haystack;
			p2 = (char *)needle;
			while (*p1 == *p2)
			{
				p1++;
				p2++;
				len--;
				if (!*p2)
					return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}
