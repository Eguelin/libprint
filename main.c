/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:56:42 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/12 14:40:58 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = NULL;

	printf("%d\n", ft_printf("Hello, %"));
	printf("%d\n", printf("Hello, %"));
	printf("%d\n", ft_printf("Hello, %   j"));
	printf("%d\n", ft_printf("Hello, %    j"));
	printf("%d\n", printf("Hello, %    "));
	printf("%d\n", printf("Hello, %    "));
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
	printf("%d\n", ft_printf("Hello, %% %s!\n", str));
	printf("%d\n", printf("Hello, %% %s!\n", str));
	printf("%d\n", ft_printf("Hello, %% %x %X %u %i %s %p %c %d %%\n", 42, 42, 42, 42, "42", (void *)42, '4', 42));
	printf("%d\n", printf("Hello, %% %x %X %u %i %s %p %c %d %%\n", 42, 42, 42, 42, "42", (void *)42, '4', 42));

	printf("\n");

	printf("%d\n", ft_dprintf(1, "Hello, %"));
	printf("%d\n", dprintf(1, "Hello, %"));
	printf("%d\n", ft_dprintf(1, "Hello, %   j"));
	printf("%d\n", dprintf(1, "Hello, %   j"));
	printf("%d\n", ft_dprintf(1, "Hello, %    "));
	printf("%d\n", dprintf(1, "Hello, %    "));
	printf("%d\n", ft_dprintf(1, "Hello, %x!\n", 42000000000L));
	printf("%d\n", dprintf(1, "Hello, %x!\n", (int)42000000000L));
	printf("%d\n", ft_dprintf(1, "Hello, %X!\n", 42000000000L));
	printf("%d\n", dprintf(1, "Hello, %X!\n", (int)42000000000L));
	printf("%d\n", ft_dprintf(1, "Hello, %u!\n", 42000000000L));
	printf("%d\n", dprintf(1, "Hello, %u!\n", (int)42000000000L));
	printf("%d\n", ft_dprintf(1, "Hello, %i!\n", 42000000000L));
	printf("%d\n", dprintf(1, "Hello, %i!\n", (int)42000000000L));
	printf("%d\n", ft_dprintf(1, "Hello, %s!\n", "42"));
	printf("%d\n", dprintf(1, "Hello, %s!\n", "42"));
	printf("%d\n", ft_dprintf(1, "Hello, %p!\n", (void *)42000000000L));
	printf("%d\n", dprintf(1, "Hello, %p!\n", (void *)42000000000L));
	printf("%d\n", ft_dprintf(1, "Hello, %p!\n", (void *)0L));
	printf("%d\n", dprintf(1, "Hello, %p!\n", (void *)0L));
	printf("%d\n", ft_dprintf(1, "Hello, %c!\n", '4'));
	printf("%d\n", dprintf(1, "Hello, %c!\n", '4'));
	printf("%d\n", ft_dprintf(1, "Hello, %d!\n", 42));
	printf("%d\n", dprintf(1, "Hello, %d!\n", 42));
	printf("%d\n", ft_dprintf(1, "Hello, %% %s!\n", str));
	printf("%d\n", dprintf(1, "Hello, %% %s!\n", str));
	printf("%d\n", ft_dprintf(1, "Hello, %% %x %X %u %i %s %p %c %d %%\n", 42, 42, 42,  42, "42", (void *)42, '4', 42));
	printf("%d\n", dprintf(1, "Hello, %% %x %X %u %i %s %p %c %d %%\n", 42, 42, 42, 42, "42", (void *)42, '4', 42));

	printf("\n");
	char	str2[100];
	bzero(str2, 100);

	printf("%d - %s\n", ft_sprintf(str2, "Hello, %"), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %"), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %   j"), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %   j"), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %    "), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %    "), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %x!", 42000000000L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %x!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %X!", 42000000000L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %X!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %u!", 42000000000L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %u!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %i!", 42000000000L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %i!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %s!", "42"), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %s!", "42"), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %p!", (void *)42000000000L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %p!", (void *)42000000000L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %p!", (void *)0L), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %p!", (void *)0L), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %c!", '4'), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %c!", '4'), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %d!", 42), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %d!", 42), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %% %s!", str), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %% %s!", str), str2);
	printf("%d - %s\n", ft_sprintf(str2, "Hello, %% %x %X %u %i %s %p %c %d %%", 42, 42, 42,  42, "42", (void *)42, '4', 42), str2);
	printf("%d - %s\n", sprintf(str2, "Hello, %% %x %X %u %i %s %p %c %d %%", 42, 42, 42, 42, "42", (void *)42, '4', 42), str2);

	printf("\n");

	printf("%d - %s\n", ft_snprintf(str2, 5, "Hello, %"), str2);
	printf("%d - %s\n", snprintf(str2, 5, "Hello, %"), str2);
	printf("%d - %s\n", ft_snprintf(str2, 3, "Hello, %   j"), str2);
	printf("%d - %s\n", snprintf(str2, 3, "Hello, %   j"), str2);
	printf("%d - %s\n", ft_snprintf(str2, 13, "Hello, %    "), str2);
	printf("%d - %s\n", snprintf(str2, 13, "Hello, %    "), str2);
	printf("%d - %s\n", ft_snprintf(str2, 15, "Hello, %x!", 42000000000L), str2);
	printf("%d - %s\n", snprintf(str2, 15, "Hello, %x!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 14, "Hello, %X!", 42000000000L), str2);
	printf("%d - %s\n", snprintf(str2, 14, "Hello, %X!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 11, "Hello, %u!", 42000000000L), str2);
	printf("%d - %s\n", snprintf(str2, 11, "Hello, %u!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 10, "Hello, %i!", 42000000000L), str2);
	printf("%d - %s\n", snprintf(str2, 10, "Hello, %i!", (int)42000000000L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 9, "Hello, %s!", "42"), str2);
	printf("%d - %s\n", snprintf(str2, 9, "Hello, %s!", "42"), str2);
	printf("%d - %s\n", ft_snprintf(str2, 17, "Hello, %p!", (void *)42000000000L), str2);
	printf("%d - %s\n", snprintf(str2, 17, "Hello, %p!", (void *)42000000000L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 24, "Hello, %p!", (void *)0L), str2);
	printf("%d - %s\n", snprintf(str2, 24, "Hello, %p!", (void *)0L), str2);
	printf("%d - %s\n", ft_snprintf(str2, 44, "Hello, %c!", '4'), str2);
	printf("%d - %s\n", snprintf(str2, 44, "Hello, %c!", '4'), str2);
	printf("%d - %s\n", ft_snprintf(str2, 8, "Hello, %d!", 42), str2);
	printf("%d - %s\n", snprintf(str2, 8, "Hello, %d!", 42), str2);
	printf("%d - %s\n", ft_snprintf(str2, 5, "Hello, %% %s!", str), str2);
	printf("%d - %s\n", snprintf(str2, 5, "Hello, %% %s!", str), str2);
	printf("%d - %s\n", ft_snprintf(str2, 30, "Hello, %% %x %X %u %i %s %p %c %d %%", 42, 42, 42,  42, "42", (void *)42, '4', 42), str2);
	printf("%d - %s\n", snprintf(str2, 30, "Hello, %% %x %X %u %i %s %p %c %d %%", 42, 42, 42, 42, "42", (void *)42, '4', 42), str2);
	return (0);
}
