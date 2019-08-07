/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:27:12 by jlagos            #+#    #+#             */
/*   Updated: 2018/12/10 12:49:23 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh_str;
	size_t			i;

	if (!s || !(*f))
		return (NULL);
	i = ft_strlen(s);
	fresh_str = (char *)malloc((i + 1) * sizeof(char));
	if (fresh_str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh_str[i] = (*f)(i, s[i]);
		i++;
	}
	fresh_str[i] = '\0';
	return (fresh_str);
}
