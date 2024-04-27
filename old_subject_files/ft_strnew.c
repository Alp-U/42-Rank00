/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:26:59 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:27:30 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc(size + 1);
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	ptr[i++] = '\0';
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*ptr;
	int	i;

	if (ac != 2)
		return (-1);
	ptr = ft_strnew(atoi(av[1]));
	while (i < atoi(av[1]) + 1)
	{
		printf("%d ", *((char *) ptr + i));
		i++;
	}
	return (0);
}*/
