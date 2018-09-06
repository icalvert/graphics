/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:17:27 by icalvert          #+#    #+#             */
/*   Updated: 2018/06/04 14:33:10 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		newstr[a] = f(s[a]);
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}
