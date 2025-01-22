/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:53:06 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 18:30:28 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_init_pf(t_printf *pf, const char *format, int fd, char *pf_buff, size_t size)
{
	pf->fd = fd;
	pf->ret = 0;
	pf->format = format;
	pf->buff.buff = pf_buff;
	pf->buff.size = size;
	pf->buff.i = 0;
	pf->arg.arg = NULL;
	pf->arg.type = NONE;
}
