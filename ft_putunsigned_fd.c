/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:15:54 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/09/08 18:19:02 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putunsigned_fd(n / 10, fd);
	len += ft_putchar_fd(n % 10 + 48, fd);
	return (len);
}
