/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:54:13 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/27 23:54:13 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbrcount(unsigned int n)
{
	int			count;

	count = 0;
	if (n > 9)
		count += ft_putunbrcount(n / 10);
	count += write (1, &"0123456789"[n % 10], 1);
	return (count);
}
