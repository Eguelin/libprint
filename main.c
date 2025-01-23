/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:56:42 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/23 14:19:21 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>

int	main(void)
{
	const char	*str = NULL;

	printf("%d\n", ft_printf("Hello, %%!\n"));
	printf("%d\n", ft_printf("Hello, %x!\n", 42000000000L));
	printf("%d\n", printf("Hello, %x!\n", (int)42000000000L));
	printf("%d\n", ft_printf("Hello, %X!\n", 42000000000L));
	printf("%d\n", printf("Hello, %X!\n", (int)42000000000L));
	printf("%d\n", ft_printf("Hello, %u!\n", 42000000000L));
	printf("%d\n", printf("Hello, %u!\n", (int)42000000000L));
	printf("%d\n", ft_printf("Hello, %i!\n", 42000000000L));
	printf("%d\n", printf("Hello, %i!\n", (int)42000000000L));
	printf("%d\n", ft_printf("Hello, %s!\n", "42"));
	printf("%d\n", printf("Hello, %s!\n", "42"));
	printf("%d\n", ft_printf("Hello, %p!\n", (void *)42000000000L));
	printf("%d\n", printf("Hello, %p!\n", (void *)42000000000L));
	printf("%d\n", ft_printf("Hello, %p!\n", (void *)0L));
	printf("%d\n", printf("Hello, %p!\n", (void *)0L));
	printf("%d\n", ft_printf("Hello, %c!\n", '4'));
	printf("%d\n", printf("Hello, %c!\n", '4'));
	printf("%d\n", ft_printf("Hello, %d!\n", 42));
	printf("%d\n", printf("Hello, %d!\n", 42));
	printf("%d\n", ft_printf("Hello, %s!\n", NULL));
	printf("%d\n", printf("Hello, %s!\n", str));
	printf("%d\n", ft_dprintf(1, "Hello, %!\n", 42));
	return (0);
}
