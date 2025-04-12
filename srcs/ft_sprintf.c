/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:38:18 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/12 14:24:19 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <limits.h>
#include <stdio.h>

int	ft_sprintf(char *str, const char *format, ...)
{
	va_list		ap;
	t_printf	pf;
	t_format	ft;
	t_string	t_str;

	ft_init_t_string(&t_str, str, ULONG_MAX);
	ft_init_t_printf(&pf, -1, &ft_flush_buff, &t_str);
	ft_init_t_format(&ft, format);
	va_start(ap, format);
	if (ft_print_loop(&ft, &pf, &ap))
		pf.ret = -1;
	pf.flush(&pf);
	va_end(ap);
	return (pf.ret);
}
