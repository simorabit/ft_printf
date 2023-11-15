/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <mal-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:19:12 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 09:23:20 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	all_cases(char *p, va_list args)
{
	if (*p == 'd' || *p == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (*p == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (*p == '%')
		return (ft_putchar('%'));
	if (*p == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (*p == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (*p == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (*p == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	if (*p == 'u')
		return (ft_put_uns_nbr(va_arg(args, unsigned int)));
	return (0);
}

size_t	ft_printf(const char *s, ...)
{
	va_list	args;
	char	*p;
	size_t	res;

	va_start(args, s);
	res = 0;
	while (*s)
	{
		res += ft_put_main_str((char *)s);
		p = found_conv(s);
		if (!p)
			return (res);
		res += all_cases(p, args);
		s = p + 1;
	}
	return (res);
}
