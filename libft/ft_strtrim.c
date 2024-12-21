/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:47:31 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:47:31 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	if (i > j)
		return (ft_strdup(""));
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	trimmed = ft_substr(s1, i, j - i + 1);
	return (trimmed);
}
