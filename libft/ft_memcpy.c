/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:13 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 19:49:13 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*tempd;
	const char	*temps;
	size_t		i;

	tempd = dst;
	temps = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		tempd[i] = temps[i];
		i++;
	}
	return (dst);
}
/*
int main ()
{
    char dst[10] = "aaaaaaaaaa";
    char src[10] = "bbbbbbbbbb";
    size_t i;
    ft_memcpy(dst,src,5);
    for (i = 0; i < 10 ; i++)
        printf("%c ", dst[i]);
    return (0);
}
*/
