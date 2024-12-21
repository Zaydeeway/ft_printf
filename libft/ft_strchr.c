/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:21:40 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:21:40 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	int		i;

	i = 0;
	l = c;
	while (s[i])
	{
		if (s[i] == l)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == l)
		return ((char *)s + i);
	return (0);
}
