/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:31:50 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:30:27 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>

int	ft_getarg(const char *format, va_list *ap, t_arg *arg)
{
	size_t				i;
	const char			*char_type = "cdixXusp%";
	const t_arg_type	*types = (t_arg_type []){
	CHAR,
	INT,
	INT,
	HEX,
	HEX_UP,
	UINT,
	STRING,
	PTR,
	PERCENT};

	i = ft_strchr(char_type, *format) - char_type;
	if (i >= ft_strlen(char_type))
	{
		arg->type = NONE;
		return (1);
	}
	arg->type = types[i];
	printf("type : %d\n", arg->type);
	if (arg->type < HEX)
		arg->arg = (void *)(long)va_arg(*ap, int);
	else if (arg->type < UINT)
		arg->arg = (void *)(long)va_arg(*ap, unsigned int);
	else if (arg->type < PERCENT)
		arg->arg = va_arg(*ap, void *);
	else
		arg->arg = (void *)('%');
	return (0);
}
