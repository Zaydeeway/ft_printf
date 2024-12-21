/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:30:46 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:30:46 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*mmr;
	size_t		total;
	size_t		i;

	if (!s1 || !s2)
		return (0);
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	mmr = malloc(total * sizeof(char));
	i = 0;
	if (!mmr)
		return (0);
	while (s1[i])
	{
		mmr[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		mmr[i] = *s2++;
		i++;
	}
	mmr[i] = '\0';
	return (mmr);
}
