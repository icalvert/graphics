/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 10:30:05 by icalvert          #+#    #+#             */
/*   Updated: 2018/09/04 10:14:10 by icalvert         ###   ########.fr       */
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
	int		**int_map;
	int		row_count;
	int		col_count;
	char	**space;
}				t_window;

typedef struct	s_coord
{
	float	dx;
	float	dy;
	float	x1;
	float	y1;
	float	x2;
	float	y2;
	int		i;
}				t_coord;

int				get_next_line(int const fd, char **line);
char			**ft_strsplit(char const *s, char c);
void			mapmem(t_window *map, int fd);
void			r_map(char *file, t_window *window, int fd);
int				open_window(t_window *window);
int				key_hook(int keycode);
void			draw_line(t_window *window, t_coord *coord);
void			draw_row_line(t_window *coord, int j, int i);
void			draw_col_line(t_window *coord, int j, int i);
void			draw_map(t_window *map);

#endif
