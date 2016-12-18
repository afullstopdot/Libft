#include "../inc/libft.h"

/*
** This function takes as a parameter a links pointer address and frees the 
** memory of the links content using the function del given as a parameter, then
** frees the links memory using free(3). The memory of next must not be freed.
** Finally, the pointer to the link that was freed must be set to NULL.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		if ((*alst)->content)
			del((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
	}	
}
