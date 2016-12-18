#include "../inc/libft.h"

/*
** This function iterates a lst and applies the function f to each link to
** create a fresh list using malloc resulting from the successive applications
** of f. if the allocation fails, NULL is returned.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*next;
	t_list	*tmp;

	tmp = lst;
	next = NULL;
	head = NULL;
	if (tmp)
	{
		head = ft_lstnew(f(tmp)->content, f(tmp)->content_size);
		head->next = next;
		while (tmp->next)
		{
			next = ft_lstnew(f(tmp->next)->content, f(tmp->next)->content_size);
			if ((tmp = tmp->next))
				next = next->next;
		}
	}
	return (head);
}
