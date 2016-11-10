/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:42:18 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 13:44:53 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *sc1;
	const char *sc2;

	if (*little == '\0')
		return ((char *)big);
	while ((big = ft_strchr(big, *little)) != 0 && 0 < len)
	{
		sc1 = big;
		sc2 = little;
		while (1)
		{
			if (*++sc2 == '\0')
				return ((char *)big);
			else if (*++sc1 != *sc2)
				break ;
			if (--len == 0)
				return (NULL);
		}
		if (len > 1)
			++big;
		else
			return ((char *)big);
	}
	return (0);
}
