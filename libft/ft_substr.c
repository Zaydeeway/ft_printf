/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:50:32 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:50:32 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mmr;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	mmr = malloc((len + 1) * sizeof(char));
	if (!mmr)
		return (0);
	while (i < len)
	{
		mmr[i] = s[i + start];
		i++;
	}
	mmr[i] = '\0';
	return (mmr);
}
