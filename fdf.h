/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 10:30:05 by icalvert          #+#    #+#             */
/*   Updated: 2018/08/30 12:49:55 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <stdio.h>

typedef struct	s_window
{
	void	*mlx;
	void	*window;
}				t_window;

typedef struct	s_coord
{
	float	x1;
	float	y1;
	float	x2;
	float	y2;
}				t_coord;

int			get_next_line(int const fd, char **line);
char		**ft_strsplit(char const *s, char c);
char		***mapmem(char *file);
char		***r_map(char *map);
int			open_window(t_window *window);
int			key_hook(int keycode);
void		draw_line(t_window *window, t_coord *coord);

#endif
