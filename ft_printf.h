/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:48:30 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/23 15:29:22 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putunsigned_fd(unsigned int n, int fd);
int	ft_puthex_fd(uintptr_t n, char *dict, int fd);
int	ft_putptr_fd(uintptr_t ptr, int fd);

#endif