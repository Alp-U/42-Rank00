/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:25:24 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:25:25 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = (char *)malloc(ft_strlen(s) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		newstr[i] = f(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;
	if (ac != 2)
		return (1);
	str = ft_strmap(av[1], uppercase);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
