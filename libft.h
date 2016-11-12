/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:57:29 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/12 13:47:22 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define NULL ((void *)0)
# include <stdlib.h>
typedef unsigned long	size_t;
void	ft_putchar(char c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
size_t		ft_strlen(const char *str);
void	ft_putstr(char const *s);
int		ft_isalnum(int c);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *string1, const char *string2);
void	*ft_memset(void *b, int c, size_t len);
size_t ft_strspn(const char *s1, const char *s2);
char *ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t len);
void	ft_memdel(void **ap);
char	*ft_strcat(char *s1, const char *s2);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
#endif
