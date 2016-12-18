#include "../inc/libft.h"

/*
** This function adds a new element to the beginning of the list.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst && new)
	{
		new->next = (*alst);
		*alst = new;
	}
}
