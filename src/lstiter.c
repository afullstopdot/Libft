#include "../inc/libft.h"

/*
** This function iterates the list and applies the function to each element
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp);
		tmp = tmp->next;
	}
}
