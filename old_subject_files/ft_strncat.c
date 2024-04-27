/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:25:42 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:25:50 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char	*dest;
	char	*src;
	int	count;

	if (ac != 4)
		return (-1);
	dest = av[1];
	src = av[2];
	count = atoi(av[3]);
	printf("New String: %s\n", ft_strncat(dest, src, count));
	return (0);
}*/
