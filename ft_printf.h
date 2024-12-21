/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:12:55 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/27 23:12:55 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *formatstr, ...);
int	ft_putnbrcount(int n);
int	ft_putstrcount(char *str);
int	ft_putcharcount(char c);
int	ft_putunbrcount(unsigned int n);
int	ft_puthexanbrcount(uintptr_t n, char c);
int	ft_putptr(uintptr_t nb);

#endif
