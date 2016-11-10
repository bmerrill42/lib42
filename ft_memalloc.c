/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:24:08 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 14:28:44 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void	*ft_memalloc(size_t size)
{
	void *mem;
	if ((mem = malloc(size)))
		ft_bzero(mem, size);
	else
		return (NULL);
	return (mem);
}
