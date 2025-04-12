/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:09:16 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/11 19:13:00 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_gettype(t_format *ft, t_arg *arg)
{
	size_t				i;
	size_t				type;
	char				*str;
	const t_arg_type	*types = (t_arg_type [CHAR_SET_TYPE_SIZE]){
		CHAR, INT, INT, UINT, HEX, HEX_UP, STRING, PTR, PERCENT};

	i = ft->i;
	i++;
	while (ft->str[i] == ' ' || ft->str[i] >= '\t' && ft->str[i] <= '\r')
		i++;
	if (ft->str[i] == '\0')
		return (1);
	str = ft_strchr(CHAR_SET_TYPE, ft->str[i]);
	if (str == NULL)
		return (1);
	type = str - CHAR_SET_TYPE;
	arg->type = types[type];
	ft->i = i;
	return (0);
}
