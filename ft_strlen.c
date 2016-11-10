/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:58:27 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/07 13:50:12 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	char *copy;

	copy = (char *)str;
	if (*copy == '\0')
		return (0);
	else
	{
		copy++;
		return (1 + ft_strlen(copy));
	}
}
