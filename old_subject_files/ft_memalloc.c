/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:38 by autku             #+#    #+#             */
/*   Updated: 2024/04/16 19:02:03 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return ((void *) ptr);
}
/*
int	main(int ac, char **av)
{
	void	*ptr;
	int	i;

	ptr = ft_memalloc(atoi(av[1]));
	i = 0;
	if (ac != 2)
		return (1);
	while (i < atoi(av[1]))
	{
		printf("%d ", *((unsigned char *) ptr + i));
		i++;
	}
	free (ptr);
	return (0);
}*/
