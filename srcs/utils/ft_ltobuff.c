/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltobuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:14:58 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/21 13:19:10 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_ltobuff(t_buff *buff, t_arg *arg)
{
	if (buff->i >= buff->size)
		return ;
	if ((long)arg->arg < 0)
	{
		buff->buff[buff->i] = '-';
		arg->arg = (void *)(-(long)(arg->arg));
		buff->i++;
	}
	ft_ultobuff(buff, arg, "0123456789");
	return ;
}
