/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char_buff.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:25:34 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/11 18:40:13 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_put_char_buff(t_printf *pf)
{
	t_arg	*arg;
	t_buff	*buff;

	buff = &pf->buff;
	arg = &pf->arg;
	if (buff->i >= PF_BUFF_SIZE)
		return ;
	buff->str[buff->i] = (char)(long)arg->value;
	buff->i++;
	if (pf->flush && buff->i >= PF_BUFF_SIZE)
		pf->flush(pf);
	return ;
}
