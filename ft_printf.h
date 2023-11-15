/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-mora <mal-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:37:09 by mal-mora          #+#    #+#             */
/*   Updated: 2023/11/14 11:06:14 by mal-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

char	*found_conv(const char *s);
size_t	ft_printf(const char *s, ...);
size_t	ft_putnbr(int nb);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_put_uns_nbr(unsigned int nb);
size_t	ft_print_ptr(unsigned long address);
size_t	ft_print_hex(unsigned long decimalValue, int upper);
size_t	ft_put_main_str(char *str);
char	*ft_strchr(const char *s, int c);
#endif
