/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:58:31 by jlagos            #+#    #+#             */
/*   Updated: 2018/11/28 15:24:51 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	unsigned char *src;

	src = (unsigned char *)s;
	while (num--)
	{
		if (*src != (unsigned char)c)
			src++;
		else
			return (src);
	}
	return (NULL);
}
