/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:12:17 by bmerrill          #+#    #+#             */
/*   Updated: 2016/11/09 16:24:02 by bmerrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtok(char *s1, const char *s2)
{
	char *sbegin, *send;
	static char *ssave = "";

	sbegin = s1 ? s1 : ssave;
	sbegin += ft_strspn(sbegin, s2);
	if (*sbegin == '\0')
	{
		ssave = "";
		return (NULL);
	}
	send = sbegin + ft_strspn(sbegin, s2);
	if (*send != '\0')
		*send++ = '\0';
	ssave = send;
	return (sbegin);
}
