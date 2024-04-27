/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:26:29 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:26:30 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;
	char	deststr1[100];
	char	deststr2[100];
	int	n;

	n = atoi(av[2]);
	if (ac != 3)
		return (-1);
	mine = ft_strncpy(deststr1, av[1], n);
	theirs = strncpy(deststr2, av[1], n);
	printf("mine  : %s\ntheirs: %s\n", mine, theirs);
	return (0);
}*/
