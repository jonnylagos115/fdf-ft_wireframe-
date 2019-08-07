/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:01:52 by jlagos            #+#    #+#             */
/*   Updated: 2018/12/10 12:49:10 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		fresh_str[i] = (*f)(s[i]);
		i++;
	}
	fresh_str[i] = '\0';
	return (fresh_str);
}
