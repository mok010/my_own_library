#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == 0)
		return ;
	while ((lst -> next) != 0)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
	(*f)(lst -> content);
}
