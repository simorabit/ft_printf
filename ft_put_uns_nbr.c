/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:31:25 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 09:32:55 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_uns_nbr(unsigned int nb)
{
	size_t	res;

	res = 0;
	if (nb >= 10)
	{
		res += ft_putnbr(nb / 10);
		res += ft_putnbr(nb % 10);
	}
	else
		res += ft_putchar(nb + '0');
	return (res);
}
