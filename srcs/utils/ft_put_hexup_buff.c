/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexup_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:36:34 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/23 11:30:49 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_put_hexup_buff(t_printf *pf)
{
	ft_put_ulongb_buff(pf, "0123456789ABCDEF");
	return ;
}
