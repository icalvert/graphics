/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:21:47 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/31 10:35:50 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long			sign;
	long			num;
	unsigned int	a;

	a = 0;
	num = 0;
	sign = 1;
	while (str[a] == '\n' || str[a] == '\t' ||
			str[a] == '\r' || str[a] == '\v' ||
			str[a] == '\f' || str[a] == ' ')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + str[a] - '0';
		a++;
	}
	return ((int)(num * sign));
}
