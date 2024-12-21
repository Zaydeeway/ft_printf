/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:12:50 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/27 23:12:50 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(char format, va_list args)

{
	int		counter;

	counter = 0;
	if (!format)
		return (0);
	if (format == 'c')
		counter = ft_putcharcount(va_arg(args, int));
	if (format == 's')
		counter = ft_putstrcount(va_arg(args, char *));
	if (format == '%')
		counter = write(1, "%", 1);
	if (format == 'i' || format == 'd')
		counter = ft_putnbrcount(va_arg(args, int));
	if (format == 'u')
		counter = ft_putunbrcount(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		counter = ft_puthexanbrcount(va_arg(args, unsigned int), format);
	if (format == 'p')
		counter = ft_putptr(va_arg(args, uintptr_t));
	return (counter);
}

int	ft_printf(const char *formatstr, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		count;

	va_start(args, formatstr);
	count = 0;
	i = 0;
	j = 0;
	while (formatstr[i])
	{
		if (formatstr[i] == '%')
		{
			count += ft_format_specifier(formatstr[i + 1], args);
			i++;
			j++;
		}
		else
			write(1, &formatstr[i], 1);
		count++;
		i++;
	}
	va_end(args);
	return (count - j);
}
/*int main()
{
    int count, ref_count;

    // %c: Single Character
    count = ft_printf("Character: %c\n", 'A');
    ref_count = printf("Character: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %s: String
    count = ft_printf("String: %s\n", "Hello, ft_printf!");
    ref_count = printf("String: %s\n", "Hello, ft_printf!");
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %p: Pointer
    int x = 42;
    count = ft_printf("Pointer: %p\n", &x);
    ref_count = printf("Pointer: %p\n", &x);
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %d and %i: Decimal and Integer
    count = ft_printf("Decimal: %d, Integer: %i\n", -1234, -1234);
    ref_count = printf("Decimal: %d, Integer: %i\n", -1234, -1234);
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %u: Unsigned Decimal
    count = ft_printf("Unsigned: %u\n", UINT_MAX);
    ref_count = printf("Unsigned: %u\n", UINT_MAX);
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %x and %X: Hexadecimal
    count = ft_printf("Hex (lower): %x, Hex (upper): %X\n", 255, 255);
    ref_count = printf("Hex (lower): %x, Hex (upper): %X\n", 255, 255);
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    // %%: Percent Sign
    count = ft_printf("Percent: %%\n");
    ref_count = printf("Percent: %%\n");
    printf("ft_printf: %d, printf: %d\n\n", count, ref_count);

    return 0;
}
*/
