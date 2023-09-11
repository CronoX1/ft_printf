/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>    +#+  +:+      +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:53:15 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/09/11 12:02:25 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	what_to_print(va_list args, const char id)
{
	if (id == 'i' || id == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (id == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (id == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (id == 'u')
		return (ft_putunsigned_fd(va_arg(args, unsigned int), 1));
	else if (id == 'x')
		return (ft_puthex_fd(va_arg(args, unsigned int), HEX_LOW, 1));
	else if (id == 'X')
		return (ft_puthex_fd(va_arg(args, unsigned int), HEX_UP, 1));
	else if (id == 'p')
		return (ft_putstr_fd("0x", 1)
			+ ft_puthex_fd(va_arg(args, uintptr_t), HEX_LOW, 1));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[++i] != '%')
				len += what_to_print(args, str[i]);
			else
				len += ft_putchar_fd(str[i], 1);
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
