/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ulongb_buff.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:04 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/11 18:40:52 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static unsigned long	set_div(unsigned long nbr, size_t b_size);

void	ft_put_ulongb_buff(t_printf *pf, const char *base)
{
	size_t			b_size;
	unsigned long	div;
	unsigned long	nbr;
	t_buff			*buff;
	t_arg			*arg;

	buff = &pf->buff;
	arg = &pf->arg;
	nbr = (unsigned long)arg->value;
	b_size = ft_strlen(base);
	div = set_div(nbr, b_size);
	while (div > 0 && buff->i < PF_BUFF_SIZE)
	{
		buff->str[buff->i] = base[nbr / div];
		nbr %= div;
		div /= b_size;
		buff->i++;
		if (pf->flush && buff->i >= PF_BUFF_SIZE)
			if (pf->flush(pf) == -1)
				return ;
	}
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
