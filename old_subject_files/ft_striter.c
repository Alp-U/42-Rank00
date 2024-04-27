/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:01:01 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 14:01:41 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	print(char *c)
{
	write(1, c, 1);
}
*/
void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_striter(av[1], print);
	return (0);
}*/
