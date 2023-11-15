/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:41:51 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/13 19:42:17 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_ptr(unsigned long address)
{
	ft_putchar('0');
	ft_putchar('x');
	return (ft_print_hex(address, 0) + 2);
}
