/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:47 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 13:18:49 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		if (((const unsigned char *)src)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)dest + i + 1));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	dest[6];
	char	src[] = "Hello World";

	ft_memccpy(dest, src, 'f', 5);
	printf("my function: %s\n", dest);
	char	dest2[6];
	char	src2[] = "Hello World";
	memccpy(dest2, src2, 'f', 5);
	printf("og function: %s\n", dest2);
	return (0);
}*/
