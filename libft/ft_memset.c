/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:12:34 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:12:34 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t len)
{
	size_t			i;
	unsigned char	c ;
	unsigned char	*temp;

	i = 0;
	c = n;
	temp = ptr;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (ptr);
}
/*
int main ()
{
    char buffer[10];
    size_t i;
    ft_memset(buffer,'1',10);
    for (i = 0; i < 10 ; i++)
        printf("%c ", buffer[i]);
    return (0);
}*/
