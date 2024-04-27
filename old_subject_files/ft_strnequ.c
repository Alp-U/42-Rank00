/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:26:47 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:26:49 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
		if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
			return (1);
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (-1);
	printf("%d\n", ft_strnequ(av[1], av[2], atoi(av[3])));
	return (0);
}*/
