/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 10:19:27 by icalvert          #+#    #+#             */
/*   Updated: 2018/08/30 12:48:47 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_line(t_window *window, t_coord *coord)
{
	float	x, y, dx, dy, step;
	int		i;

	dx = (coord->x2 - coord->x1);
	dy = (coord->y2 - coord->y1);
	if (fabs(dx) >= fabs(dy))
		step = fabs(dx);
	else
		step = fabs(dy);
	dx = dx / step;
	dy = dy / step;
	x = coord->x1;
	y = coord->y1;
	i = 1;
	while (i <= step)
	{
		mlx_pixel_put(window->mlx, window->window, x, y, 0x0FFFF);
		x = x + dx;
		y = y + dy;
		i = i + 1;
	}
}
