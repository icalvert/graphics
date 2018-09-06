/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:03:35 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/25 09:18:20 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	a;

	if (s == NULL)
		return (NULL);
	if ((substr = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	a = 0;
	while (a < len && s[start] != '\0')
	{
		substr[a] = s[start];
		start++;
		a++;
	}
	substr[a] = '\0';
	return (substr);
}
