/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:10:13 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/28 22:10:13 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrcount(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
