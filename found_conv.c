/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <mal-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:29:14 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 11:09:12 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*found_conv(const char *s)
{
	char	*conv;

	conv = "cspdiuxX%";
	while (*s)
	{
		if (*s == '%' && ft_strchr(conv, *(s + 1)))
			return ((char *)(s + 1));
		s++;
	}
	return (NULL);
}
