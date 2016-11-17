/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:58:18 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/17 12:02:08 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stackelem	ft_stackpop(t_stack *stack)
{
	if (ft_stackisempty(stack))
	{
		ft_putstr_fd("stack is empty", 2);
		return(1);
	}
	return (stack->contents[stack->top--]);
}
