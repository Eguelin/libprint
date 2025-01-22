/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprint.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:44:13 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 13:06:35 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINT_H
# define LIBPRINT_H

# include <stdarg.h>
# include <unistd.h>

# define PRINTF_BUFF_SIZE 1024

typedef enum e_arg_type
{
	CHAR,
	STRING,
	INT,
	UINT,
	HEX,
	HEX_UP,
	PTR,
	PERCENT
}	t_arg_type;

typedef struct s_arg
{
	void		*arg;
	t_arg_type	type;
}	t_arg;

typedef struct s_buff
{
	char	*buff;
	size_t	size;
	size_t	i;
}	t_buff;

typedef struct s_printf
{
	int		fd;
	int		ret;
	va_list	ap;
	t_arg	arg;
	t_buff	buff;
}	t_printf;

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_ltobuff(t_buff *buff, t_arg *arg);
void	ft_ultobuff(t_buff *buff, t_arg *arg, const char *base);
void	ft_strcpybuff(t_buff *buff, t_arg *arg);
int		ft_getarg(char c, va_list *ap, t_arg *arg);

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_sprintf(char *str, const char *format, ...);
int		ft_snprintf(char *str, size_t size, const char *format, ...);

#endif
