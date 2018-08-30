/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:16:59 by icalvert          #+#    #+#             */
/*   Updated: 2018/06/01 14:29:52 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (a < n && s1[a] != '\0')
	{
		b = 0;
		while (a + b < n && s1[a + b] == s2[b] && s2[b] != '\0')
			b++;
		if (s2[b] == '\0')
			return ((char *)s1 + a);
		a++;
	}
	return (NULL);
}
