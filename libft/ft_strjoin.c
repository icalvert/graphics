/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:56:59 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/28 09:03:32 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dst;
	unsigned int	a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	while (*s1 != '\0')
		dst[a++] = *s1++;
	while (*s2 != '\0')
		dst[a++] = *s2++;
	dst[a] = '\0';
	return (dst);
}
