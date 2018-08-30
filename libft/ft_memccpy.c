/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:43:50 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/22 13:00:49 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	*p1;
	unsigned char	*p2;

	a = 0;
	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dst;
	while (a < n)
	{
		p2[a] = p1[a];
		if (p1[a] == (unsigned char)c)
			return (dst + a + 1);
		a++;
	}
	return (NULL);
}
