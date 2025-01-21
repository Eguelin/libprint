/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:56:42 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/21 12:58:51 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>

int	main(void)
{
	t_buff	buff;
	t_arg	arg;
	char	str[17];

	buff.size = 17;
	buff.i = 0;
	buff.buff = str;
	arg.arg = (void *)((long)2147483649);
	ft_ltobuff(&buff, &arg);
	buff.buff[buff.i] = ' ';
	buff.i++;
	arg.arg = (void *)((int)2147483649);
	ft_ltobuff(&buff, &arg);
	printf("%s", buff.buff);
	buff.i = 0;
	ft_ltobuff(&buff, &arg);
	printf("%s\n", buff.buff);
	return (0);
}
