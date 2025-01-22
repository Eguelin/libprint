/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ulongb_buff.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:04 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:23:37 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

static unsigned long	set_div(unsigned long nbr, size_t b_size);

void	ft_put_ulongb_buff(t_buff *buff, t_arg *arg, const char *base)
{
	size_t			b_size;
	unsigned long	div;
	unsigned long	nbr;

	if (buff->i >= buff->size)
		return ;
	nbr = (unsigned long)arg->arg;
	b_size = ft_strlen(base);
	div = set_div(nbr, b_size);
	while (div > 0 && buff->i < buff->size)
	{
		buff->buff[buff->i] = base[nbr / div];
		nbr %= div;
		div /= b_size;
		buff->i++;
	}
	arg->arg = (void *)nbr;
	if (arg->arg == 0)
		arg->type = NONE;
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
