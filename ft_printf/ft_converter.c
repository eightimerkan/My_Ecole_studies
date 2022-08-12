/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 20:52:26 by edolgun           #+#    #+#             */
/*   Updated: 2022/07/28 20:59:19 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_hex_converter(unsigned long myHexNumber, int *lenght)
{
	char	*my_base;

	my_base = "0123456789abcdef";
	if (myHexNumber >= 16)
	{
		my_hex_converter(myHexNumber / 16, lenght);
		my_hex_converter(myHexNumber % 16, lenght);
	}
	else
		ft_putchar_fd(my_base[myHexNumber], 1, lenght);
}

void	my_hex_up_converter(unsigned long myHexNumber, int *lenght)
{
	char	*my_base;

	my_base = "0123456789ABCDEF";
	if (myHexNumber >= 16)
	{
		my_hex_up_converter(myHexNumber / 16, lenght);
		my_hex_up_converter(myHexNumber % 16, lenght);
	}
	else
		ft_putchar_fd(my_base[myHexNumber], 1, lenght);
}

void	my_decimal_converter(unsigned int myDecimalNumber, int *lenght)
{
	char	*my_base;

	my_base = "0123456789";
	if (myDecimalNumber >= 10)
	{
		my_decimal_converter(myDecimalNumber / 10, lenght);
		my_decimal_converter(myDecimalNumber % 10, lenght);
	}
	else
		ft_putchar_fd(my_base[myDecimalNumber], 1, lenght);
}
