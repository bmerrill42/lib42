/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:15:15 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/14 11:13:29 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	int		start;
	char	*newstr;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return ("");
	end = ft_strlen(s) - 1;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && 0 < end)
		end--;
	if (end <= 0)
		return (NULL);
	newstr = ft_strsub(s, start, (end - start) + 1);
	return (newstr);
}
