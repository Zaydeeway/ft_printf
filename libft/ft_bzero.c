/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:03:36 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 11:03:36 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*temp;

	temp = s;
	i = 0;
	while (i < len)
	{
		temp[i] = 0;
		i++;
	}
}
/*
int main ()
{
    char buffer[10];
    size_t i;
    ft_bzero(buffer,10);
    for (i = 0; i < 10 ; i++)
        printf("%d ", buffer[i]);
    return (0);
}
*/
