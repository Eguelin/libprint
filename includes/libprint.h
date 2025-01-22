/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprint.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:44:13 by eguelin           #+#    #+#             */
/*   Updated: 2025/01/22 19:02:00 by eguelin          ###   ########.fr       */
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
	INT,
	HEX,
	HEX_UP,
	UINT,
	STRING,
	PTR,
	PERCENT,
	NONE,
}	t_arg_type;

typedef struct s_arg
{
	void		*arg;
	t_arg_type	type;
	char		null[8];
}	t_arg;

typedef struct s_buff
{
	char	*buff;
	size_t	size;
	size_t	i;
}	t_buff;

typedef struct s_printf
{
	int			fd;
	int			ret;
	const char	*format;
	va_list		ap;
	t_arg		arg;
	t_buff		buff;
}	t_printf;

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
void	ft_put_arg_buff(t_printf *pf);
void	ft_put_char_buff(t_buff *buff, t_arg *arg);
void	ft_put_hex_buff(t_buff *buff, t_arg *arg);
void	ft_put_hexup_buff(t_buff *buff, t_arg *arg);
void	ft_put_long_buff(t_buff *buff, t_arg *arg);
void	ft_put_str_buff(t_buff *buff, t_arg *arg);
void	ft_put_ulong_buff(t_buff *buff, t_arg *arg);
void	ft_put_ulongb_buff(t_buff *buff, t_arg *arg, const char *base);
void	ft_putargbuff(t_printf *pf);
int		ft_getarg(const char *format, va_list *ap, t_arg *arg);
void	ft_init_pf(t_printf *pf, const char *format, int fd, char *pf_buff, size_t size);

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_sprintf(char *str, const char *format, ...);
int		ft_snprintf(char *str, size_t size, const char *format, ...);

#endif
