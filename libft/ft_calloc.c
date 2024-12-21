/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:04:57 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 11:04:57 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = 0;
	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (0);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
