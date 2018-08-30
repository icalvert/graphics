/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:20:30 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/22 15:25:57 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	int				a;

	a = 0;
	c2 = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (ptr[a] == c2)
			return (ptr + a);
		a++;
	}
	return (NULL);
}
