/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:08:28 by eguelin           #+#    #+#             */
/*   Updated: 2025/04/12 13:56:35 by eguelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdarg.h>
# include <unistd.h>

# define PF_BUFF_SIZE 1024
# define CHAR_SET_TYPE "cdiuxXsp%"
# define CHAR_SET_TYPE_SIZE 9

typedef enum e_arg_type
{
	CHAR,
	INT,
	UINT,
	HEX,
	HEX_UP,
	STRING,
	PTR,
	PERCENT
}	t_arg_type;

typedef struct s_arg
{
	void		*value;
	t_arg_type	type;
}	t_arg;

typedef struct s_buff
{
	char	str[PF_BUFF_SIZE];
	size_t	i;
}	t_buff;

typedef struct s_format
{
	const char	*str;
	size_t		i;
}	t_format;

typedef struct s_string
{
	char	*str;
	size_t	size;
	size_t	i;
}	t_string;

typedef struct s_printf
{
	int			fd;
	int			ret;
	t_buff		buff;
	t_string	*t_str;
	t_arg		arg;
	int			(*flush)(struct s_printf *);
}	t_printf;

void	bzero(void *s, size_t n);
int		ft_flush_buff(t_printf *pf);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_print_loop(t_format *ft, t_printf *pf, va_list *ap);
void	ft_put_arg_buff(t_printf *pf);
void	ft_put_char_buff(t_printf *pf);
void	ft_put_hex_buff(t_printf *pf);
void	ft_put_hexup_buff(t_printf *pf);
void	ft_put_long_buff(t_printf *pf);
void	ft_put_ptr_buff(t_printf *pf);
void	ft_put_str_buff(t_printf *pf);
void	ft_put_ulong_buff(t_printf *pf);
void	ft_put_ulongb_buff(t_printf *pf, const char *base);
void	ft_putargbuff(t_printf *pf);
int		ft_getarg(va_list *ap, t_arg *arg);
int		ft_gettype(t_format *ft, t_arg *arg);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_write_pf(t_printf *pf);
void	ft_init_t_string(t_string *t_str, char *str, size_t size);
void	ft_init_t_format(t_format *ft, const char *str);
void	ft_init_t_printf(t_printf *pf, int fd, int (*flush)(t_printf *),
			t_string *t_str);

#endif
