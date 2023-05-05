#include <ft_list.h>

int	ft_list_size(t_list *list)
{
	int	size;

	size = 0;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}
