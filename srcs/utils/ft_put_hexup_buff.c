/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexup_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:36:34 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 18:51:43 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_put_hexup_buff(t_buff *buff, t_arg *arg)
{
	if (buff->i >= buff->size)
		return ;
	ft_put_ulongb_buff(buff, arg, "0123456789ABCDEF");
	return ;
}
