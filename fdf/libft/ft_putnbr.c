/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:45:59 by icalvert          #+#    #+#             */
/*   Updated: 2018/06/01 13:37:00 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	nbr;

	nbr = n;
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}
