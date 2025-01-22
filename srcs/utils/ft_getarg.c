/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:31:50 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 13:35:27 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

int	ft_getarg(char c, va_list *ap, t_arg *arg)
{
	size_t				i;
	const char			*char_type = "csdiuxXp%";
	const t_arg_type	*types = (t_arg_type []){\
	CHAR, STRING, INT, INT, UINT, HEX, HEX_UP, PTR, PERCENT};

	i = ft_strchr(char_type, c) - char_type;
	if (i >= ft_strlen(char_type))
		return (1);
	arg->type = types[i];
	if (arg->type == CHAR || arg->type == INT)
		arg->arg = (void *)(long)va_arg(*ap, int);
	else if (arg->type < PERCENT)
		arg->arg = va_arg(*ap, void *);
	else
		arg->arg = (void *)('%');
	return (0);
}
