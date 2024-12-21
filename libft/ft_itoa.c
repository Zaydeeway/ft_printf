/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:41:22 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 19:41:22 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*ptr;
	long	ln;

	ln = n;
	count = ft_count(ln);
	ptr = malloc((count + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[count] = 0;
	if (!ln)
		ptr[0] = '0';
	else if (ln < 0)
	{
		ptr[0] = '-';
		ln = -ln;
	}
	while (ln != 0)
	{
		ptr[count - 1] = ((ln % 10) + '0');
		ln = ln / 10;
		count--;
	}
	return (ptr);
}
