#include "../inc/libft.h"

/*
** Allocates with malloc(3) and returns a "fresh" link. The variables content
** and content_size of the new link are initialized by copy of the parameters of
** the function. If the paramete is null, the variable content is initialized 
** to NULL and the size to 0 even if the argument size is not 0, the var next
** is initialized to null and is the next node of the list, if alloc fails 
** the function returns null.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		if (!content)
		{
			new_node->content = NULL;
			new_node->content_size = 0;
		}
		else
		{
			if ((new_node->content = malloc(sizeof(content))))
			{
				ft_memcpy((new_node->content), content, sizeof(content));
				new_node->content_size = content_size;
			}
		}
		new_node->next = NULL;
	}
	return (new_node);
}
