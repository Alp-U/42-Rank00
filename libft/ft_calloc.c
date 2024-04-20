/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:53:13 by autku             #+#    #+#             */
/*   Updated: 2024/04/20 12:17:01 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			bytes;
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	while (i < bytes)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_calloc(10, sizeof(int));
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
/*
// test with the og function
int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = calloc(10, sizeof(int));
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/