/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:53:40 by jlagos            #+#    #+#             */
/*   Updated: 2018/12/11 11:52:12 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*sc;
	char	*dst;
	char	buffer[num];

	sc = (char *)src;
	dst = (char *)dest;
	i = 0;
	if (sc == dst)
		return (NULL);
	while (i != num)
	{
		buffer[i] = sc[i];
		i++;
	}
	i = 0;
	while (i != num)
	{
		dst[i] = buffer[i];
		i++;
	}
	return (dst);
}
