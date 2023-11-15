/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:44:57 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 09:35:17 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int nb)
{
	size_t	res;

	res = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		res++;
	}
	if (nb >= 10)
	{
		res += ft_putnbr(nb / 10);
		res += ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		res++;
	}
	return (res);
}
