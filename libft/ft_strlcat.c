/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 13:20:12 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/31 09:23:24 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	while (dest[a] && a < size)
		a++;
	while ((src[b]) && ((a + b + 1) < size))
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a != size)
		dest[a + b] = '\0';
	return (a + ft_strlen(src));
}
