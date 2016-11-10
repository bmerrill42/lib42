/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:55:26 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 15:57:20 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char *sc;
	unsigned int thing;
	thing = 0;
	sc = s;
	while (*sc)
	{
		f(thing, sc);
		sc++;
		thing++;
	}
}
