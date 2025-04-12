/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:10:34 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/11 19:50:09 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (!size)
		return (ft_strlen(src));
	size--;
	while (size > len && src[len])
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	len += ft_strlen(src + len);
	return (len);
}
