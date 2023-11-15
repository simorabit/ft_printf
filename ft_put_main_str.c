/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_main_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <mal-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:40:32 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 11:08:18 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_main_str(char *str)
{
	size_t	res;
	char	*conv;

	conv = "cspdiuxX%";
	res = 0;
	if (! *str)
	{
		write(1, "(null)", 6);
		res += 6;
	}
	while (*str != '\0' && !(*str == '%' && ft_strchr(conv, *(str + 1))))
	{
		write(1, str, 1);
		res++;
		str++;
	}
	return (res);
}
