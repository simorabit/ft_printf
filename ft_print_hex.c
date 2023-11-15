/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:28:25 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/13 20:36:52 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digit(unsigned long decimalValue)
{
	int				counter;
	unsigned long	temp;

	counter = 1;
	temp = decimalValue;
	while (temp > 15)
	{
		temp /= 16;
		counter++;
	}
	return (counter);
}

void	fill_string(unsigned int remainder, char *str, int i, int upper)
{
	if (remainder < 10)
		str[i - 1] = remainder + '0';
	else
	{
		if (upper)
			str[i - 1] = remainder - 10 + 'A';
		else
			str[i - 1] = remainder - 10 + 'a';
	}
}

size_t	ft_print_hex(unsigned long decimalValue, int upper)
{
	int				max_num;
	int				i;
	unsigned int	remainder;
	char			*str;
	size_t			result;

	max_num = count_digit(decimalValue);
	i = max_num;
	str = (char *)malloc((max_num + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (i > 0)
	{
		remainder = decimalValue % 16;
		fill_string(remainder, str, i, upper);
		decimalValue /= 16;
		i--;
	}
	str[max_num] = '\0';
	result = ft_putstr(str);
	free(str);
	return (result);
}
