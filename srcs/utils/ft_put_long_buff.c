/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_long_buff.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:14:58 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 18:56:32 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_put_long_buff(t_buff *buff, t_arg *arg)
{
	if (buff->i >= buff->size)
		return ;
	if ((long)arg->arg < 0)
	{
		buff->buff[buff->i] = '-';
		arg->arg = (void *)(-(long)(arg->arg));
		buff->i++;
	}
	ft_put_ulong_buff(buff, arg);
	return ;
}
