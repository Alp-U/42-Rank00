/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:59:54 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 14:00:47 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (-1);
	printf("%d\n", ft_strequ(av[1], av[2]));
	return (0);
}*/
