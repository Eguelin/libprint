/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultobuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:04 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/21 12:06:26 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

static unsigned long	set_div(unsigned long nbr, size_t b_size);

void	ft_ultobuff(t_buff *buff, t_arg *arg, const char *base)
{
	size_t			b_size;
	unsigned long	div;

	b_size = ft_strlen(base);
	div = set_div((unsigned long)arg->arg, b_size);
	if (buff->i >= buff->size)
		return ;
	while (div > 0 && buff->i < buff->size - 1)
	{
		buff->buff[buff->i] = base[(long)arg->arg / div];
		arg->arg = (void *)((long)arg->arg % div);
		div /= b_size;
		buff->i++;
	}
	buff->buff[buff->i] = 0;
	return ;
}

static unsigned long	set_div(unsigned long nbr, size_t b_size)
{
	long	div;

	div = 1;
	while (nbr / div >= b_size)
		div *= b_size;
	return (div);
}
