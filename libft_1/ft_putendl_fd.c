/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:14:53 by jlagos            #+#    #+#             */
/*   Updated: 2018/11/18 13:28:14 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char		newline;
	size_t		i;

	i = 0;
	newline = '\n';
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, &newline, 1);
}
