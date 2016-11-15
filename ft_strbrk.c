/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbrk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:28:15 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/14 15:34:08 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char *sc1;
	const char *sc2;

	sc1 = s1;
	while (*sc1 != '\0')
	{
		sc2 = s2;
		while (*sc2 != '\0')
		{
			if (*sc1 == *sc2)
				return ((char *)sc1);
			++sc2;
		}
		++sc1;
	}
	return (NULL);
}
