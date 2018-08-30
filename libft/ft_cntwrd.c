/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:51:03 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/31 14:35:37 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntwrd(char const *s, char c)
{
	unsigned int	a;
	int				counter;

	a = 0;
	counter = 0;
	while (s[a])
	{
		while (s[a] == c)
			a++;
		if (s[a] != '\0')
			counter++;
		while (s[a] && (s[a] != c))
			a++;
	}
	return (counter);
}
