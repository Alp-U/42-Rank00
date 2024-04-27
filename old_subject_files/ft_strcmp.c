/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:57 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 13:59:00 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(int ac, char **av)
{
	int	mine;
	int	theirs;

	if (ac != 3)
		return (-1);
	mine = ft_strcmp(av[1], av[2]);
	theirs = strcmp(av[1], av[2]);
	printf("mine  : %d\ntheirs: %d", mine, theirs);
	return (0);
}*/
