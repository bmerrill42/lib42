/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:49:16 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/14 16:22:14 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\v' ||
		a == '\f' || a == '\r' || a == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	char			current_char;
	unsigned int	number;
	int				negative;

	negative = 0;
	current_char = *str++;
	number = 0;
	while (isspace(current_char) == 1)
		current_char = *str++;
	if (current_char == '-')
	{
		negative = -1;
		current_char = *str++;
	}
	if (current_char == '+')
		current_char = *str++;
	while (ft_isdigit(current_char) == 1)
	{
		number *= 10;
		number += (current_char - '0');
		current_char = *str++;
	}
	if (negative < 0)
		return (number *= negative);
	return (number);
}
