/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:56:42 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:18:01 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_printf("Hello, %%!\n"));
	printf("%d\n", ft_printf("Hello, %x!\n", 42000000000L));
	printf("%d\n", printf("Hello, %x!\n", (int)42000000000L));
	return (0);
}
