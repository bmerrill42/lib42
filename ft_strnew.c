/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:40:42 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 14:47:26 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	if ((newstr = (char *)malloc(sizeof(char) * size + 1)))
		ft_memset(newstr, '\0', size + 1);
	else
		return (NULL);
	return (newstr);
}
