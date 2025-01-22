/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_arg_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:25:28 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:05:56 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_put_arg_buff(t_printf *pf)
{
	void	(* const putarg[])(t_buff *, t_arg *) = {
	ft_put_char_buff,
	ft_put_long_buff,
	ft_put_hex_buff,
	ft_put_hexup_buff,
	ft_put_long_buff,
	ft_put_str_buff,
	ft_put_hex_buff,
	ft_put_char_buff};

	if (pf->arg.type == NONE)
	{
		pf->format++;
		if (ft_getarg(pf->format, &pf->ap, &pf->arg) == -1)
			return ;
	}
	putarg[pf->arg.type](&pf->buff, &pf->arg);
	return ;
}
