/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexanbrcount.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:33:37 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/28 22:33:37 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexanbrcount(uintptr_t n, char c)
{
	const char	*hex_lower = "0123456789abcdef";
	const char	*hex_upper = "0123456789ABCDEF";
	int			count;

	count = 0;
	if (n >= 16)
		count += ft_puthexanbrcount(n / 16, c);
	if (c == 'x')
		count += ft_putcharcount(hex_lower[n % 16]);
	else
		count += ft_putcharcount(hex_upper[n % 16]);
	return (count);
}
