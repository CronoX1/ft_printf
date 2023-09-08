/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:14:18 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/09/08 18:17:17 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(uintptr_t n, char *dict, int fd)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_puthex_fd(n / 16, dict, fd);
	len += ft_putchar_fd(dict[n % 16], fd);
	return (len);
}
