/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:23:43 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:23:43 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*mmr;
	size_t		i;

	mmr = 0;
	i = 0;
	mmr = malloc(ft_strlen(s1) + 1);
	if (!mmr)
		return (0);
	while (s1[i])
	{
		mmr[i] = s1[i];
		i++;
	}
	mmr[i] = '\0';
	return (mmr);
}
