/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpybuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:08:02 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/21 13:14:08 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_strcpybuff(t_buff *buff, t_arg *arg)
{
	size_t	i;

	i = 0;
	if (buff->i >= buff->size)
		return ;
	while (((char *)arg->arg)[i] != 0 && buff->i < buff->size - 1)
	{
		buff->buff[buff->i] = ((char *)arg->arg)[i];
		i++;
		buff->i++;
	}
	buff->buff[buff->i] = 0;
	return ;
}
