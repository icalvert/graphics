/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:20:37 by icalvert          #+#    #+#             */
/*   Updated: 2018/05/30 12:37:56 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
