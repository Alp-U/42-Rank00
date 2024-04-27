/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:59:11 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 13:59:14 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
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

	if (ac != 2)
		return (-1);
	mine = ft_strcpy(deststr1, av[1]);
	theirs = strcpy(deststr2, av[1]);
	printf("mine  : %s\ntheirs: %s\n", mine, theirs);
	return (0);
}*/
