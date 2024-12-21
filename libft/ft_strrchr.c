/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:45:53 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:45:53 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	int		i;
	int		j;

	i = 0;
	j = -1;
	l = c;
	while (s[i])
	{
		if (s[i] == l)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)s + j);
	if (s[i] == l)
		return ((char *)s + i);
	return (0);
}
/*
int	main(void)
{
	char	v[] = "Hello world";
	printf("%p\n", ft_strrchr(v, 'o'));
	printf("%p\n", strrchr(v, 'o'));
}
*/
