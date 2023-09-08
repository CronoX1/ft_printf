/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>    +#+  +:+      +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:24:22 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/09/05 16:24:29 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int entero = -42;
    char * string = NULL;
    char    caracter = 'c';
    unsigned int negativo = 42;

    printf("ft_printf Devuelve: %i\n", ft_printf("El porcentaje es %%%%%%.\n"));
    printf("printf Devuelve: %i\n", printf("El porcentaje es %%%%%%.\n"));
    printf("ft_printf Devuelve: %i\n", ft_printf("La string es %s y %s.\n", string, "adios"));
    printf("printf Devuelve: %i\n", printf("La string es %s y %s.\n", string, "adios"));
    printf("ft_printf Devuelve: %i\n", ft_printf("El char es %c.\n",caracter));
    printf("printf Devuelve: %i\n", printf("El char es %c.\n", caracter));
    printf("ft_printf Devuelve: %i\n", ft_printf("El int es %i.\n", entero));
    printf("printf Devuelve: %i\n", printf("El int es %i.\n", entero));
    printf("ft_printf Devuelve: %i\n", ft_printf("El digito es %d.\n", entero));
    printf("printf Devuelve: %i\n", printf("El digito es %d.\n", entero));
    printf("ft_printf Devuelve: %i\n", ft_printf("El entero sin signo es %u.\n", negativo));
    printf("printf Devuelve: %i\n", printf("El entero sin signo es %u.\n", negativo));
    printf("ft_printf Devuelve: %i\n", ft_printf("El numero en hexadecimal lower es %x.\n", entero));
    printf("printf Devuelve: %i\n", printf("El numero en hexadecimal lower es %x.\n", entero));
    printf("ft_printf Devuelve: %i\n", ft_printf("El numero en hexadecimal upper es %X.\n", entero));
    printf("printf Devuelve: %i\n", printf("El numero en hexadecimal upper es %X.\n", entero));
    printf("ft_printf Devuelve: %i\n", ft_printf("El puntero es %p.\n", &negativo));
    printf("ft_printf Devuelve: %i\n", printf("El puntero es %p.\n", &negativo));
}