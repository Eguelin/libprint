/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:56:42 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 13:35:48 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>

void	test_va_list(t_arg	*arg, ...)
{
	va_list	ap;

	va_start(ap, arg);
	ft_getarg('c', &ap, arg);
	va_end(ap);
}

int	main(void)
{
	t_buff	buff;
	t_arg	arg;
	char	str[17];
	char	c;

	buff.size = 17;
	buff.i = 0;
	buff.buff = str;
	test_va_list(&arg, 2147483649);
	ft_ltobuff(&buff, &arg);
	buff.buff[buff.i] = ' ';
	buff.i++;
	c = -48;
	test_va_list(&arg, c);
	ft_ltobuff(&buff, &arg);
	printf("%s\n", buff.buff);
	return (0);
}
