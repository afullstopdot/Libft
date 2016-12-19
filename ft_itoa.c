/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 08:35:42 by amarquez          #+#    #+#             */
/*   Updated: 2016/12/19 09:01:31 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
