/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:27:24 by autku             #+#    #+#             */
/*   Updated: 2024/04/20 16:54:32 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	delete_node(void *data)
{
	free(data);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
int	main(void)
{
	int		*data;
	t_list	*node;

	data = (int *)malloc(sizeof(int));
    *data = 42;
	node = ft_lstnew(data);
	printf("Content of the node: %d\n...\n", *(int *)node->content);
	ft_lstdelone(node, delete_node);
	node = NULL;
	if (node == NULL)
		printf("Node has been deleted");
    return 0;
}*/
