#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	len = 1;
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
