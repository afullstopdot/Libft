#include "../inc/libft.h"

/*
** This function takes as a parameter the address of a pointer to a link and
** frees the memory of this link and every successors of that link using the 
** functions del and free. Finally the pointer to the link that was just freed 
** must be set to NULL.
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	while (tmp)
	{
		ft_lstdelone(&tmp, del);
		tmp = tmp->next;
	}
}
