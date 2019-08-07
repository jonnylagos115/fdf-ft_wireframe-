/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:04:18 by jlagos            #+#    #+#             */
/*   Updated: 2018/12/09 20:30:33 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;

	src = (unsigned char *)s;
	dest = (unsigned char *)d;
	i = 0;
	while (i != n && n)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
