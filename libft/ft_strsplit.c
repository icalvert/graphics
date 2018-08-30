/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:24:43 by icalvert          #+#    #+#             */
/*   Updated: 2018/06/04 14:55:52 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		a;
	int		b;
	int		k;
	char	**table;

	a = 0;
	k = 0;
	if (s == NULL ||
			!(table = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1)))
		return (NULL);
	while (s[a])
	{
		while (s[a] == c)
			a++;
		b = a;
		while (s[a] && s[a] != c)
			a++;
		if (a > b)
		{
			table[k] = ft_strndup(s + b, a - b);
			k++;
		}
	}
	table[k] = NULL;
	return (table);
}
