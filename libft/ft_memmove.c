/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:53:35 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 19:53:35 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tempd;
	const char	*temps;

	tempd = dst;
	temps = src;
	if (!dst && !src)
		return (0);
	if (dst > src)
		while (len--)
			tempd[len] = temps[len];
	else
		while (len--)
			*tempd++ = *temps++;
	return (dst);
}
/*
int main ()
{
    char dst[10] = "aaaaaaaaaa";
    char src[10] = "bbbbbbbbbb";
    size_t i;
    ft_memmove(dst,src,5);
    for (i = 0; i < 10 ; i++)
        printf("%c ", dst[i]);
    return (0);
}
*/
