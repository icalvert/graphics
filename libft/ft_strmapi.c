/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:57:24 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/31 13:53:51 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*newstr;

	a = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		newstr[a] = f(a, s[a]);
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}
