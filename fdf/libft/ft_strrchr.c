/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:08:58 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/21 09:19:41 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = (int)ft_strlen(s) + 1;
	while (a--)
	{
		if (*(s + a) == (char)c)
			return ((char *)s + a);
	}
	return (NULL);
}
