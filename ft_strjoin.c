/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:25:04 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 16:33:27 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	if ((join = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		join = ft_strcpy(join, s1);
		join = ft_strcpy((join + ft_strlen(s1)), s2);
	}
	return (join);
}
