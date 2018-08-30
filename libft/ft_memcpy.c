/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:42:41 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/22 13:00:59 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	if (n == 0 || dst == src)
		return (dst);
	p1 = (char *)dst;
	p2 = (char *)src;
	while (--n)
		*p1++ = *p2++;
	*p1 = *p2;
	return (dst);
}
