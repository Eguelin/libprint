/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:38:18 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:15:26 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

static int	ft_write_pf(t_printf *pf);

int	ft_printf(const char *format, ...)
{
	t_printf	pf;
	char		pf_buff[PRINTF_BUFF_SIZE];

	ft_init_pf(&pf, format, 1, pf_buff, PRINTF_BUFF_SIZE);
	va_start(pf.ap, format);
	while (*pf.format)
	{
		if (*pf.format == '%' || pf.arg.type != NONE)
			ft_put_arg_buff(&pf);
		else
			pf.buff.buff[pf.buff.i++] = *pf.format;
		if (pf.buff.i == pf.buff.size)
			if (ft_write_pf(&pf) == -1)
				return (-1);
		if (pf.arg.type == NONE)
			pf.format++;
	}
	if (ft_write_pf(&pf) == -1)
		return (-1);
	va_end(pf.ap);
	return (pf.ret);
}

static int	ft_write_pf(t_printf *pf)
{
	if (write(pf->fd, pf->buff.buff, pf->buff.i) == -1)
		return (-1);
	pf->ret += pf->buff.i;
	pf->buff.i = 0;
	return (0);
}
