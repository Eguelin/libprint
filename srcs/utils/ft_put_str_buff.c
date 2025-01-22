/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:08:02 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:16:43 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}

void	ft_put_str_buff(t_buff *buff, t_arg *arg)
{
	char	*str;

	if (buff->i >= buff->size)
		return ;
	str = (char *)arg->arg;
	if (str == NULL)
		str = ft_strcpy(arg->null, "(null)");
	while (*str != 0 && buff->i < buff->size)
	{
		buff->buff[buff->i] = *str;
		buff->i++;
		str++;
	}
	arg->arg = str;
	if (*str == 0)
		arg->type = NONE;
	return ;
}
