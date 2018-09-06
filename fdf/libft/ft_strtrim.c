/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:22:36 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/31 14:13:35 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	a;
	size_t	len;

	a = 0;
	if (!s)
		return (NULL);
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t'))
		a++;
	if (s[a] == '\0')
		return (ft_strdup(s + a));
	len = ft_strlen(s) - 1;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len > 0)
		len--;
	return (ft_strsub(s, a, len - a + 1));
}
