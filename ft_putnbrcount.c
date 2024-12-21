/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:50:00 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/27 23:50:00 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrcount(int n)

{
	long int	nb;
	int			count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		count++;
	}
	if (nb > 9)
		count += ft_putnbrcount(nb / 10);
	count += write (1, &"0123456789"[nb % 10], 1);
	return (count);
}
