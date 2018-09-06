/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:07:50 by icalvert          #+#    #+#             */
/*   Updated: 2018/09/06 07:51:27 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <mlx.h>
#include <fcntl.h>

void		mapmem(t_window *window, int fd)
{
	int		i;
	int		j;
	char	*buff;
	char	**temp;

	i = 0;
	j = 0;
	window->space = (char **)malloc(sizeof(char *) * (window->row_count + 1));
	while (get_next_line(fd, &buff) > 0)
	{
		window->space[i] = ft_strdup(buff);
		i++;
	}
	temp = ft_strsplit(window->space[0], ' ');
	while (temp[j])
		j++;
	temp[j] = NULL;
	window->col_count = j;
	j = 0;
	window->int_map = (int **)ft_memalloc(sizeof(int *) * window->row_count);
	while (j < window->row_count)
	{
		window->int_map[j] = (int *)malloc(sizeof(int) * window->col_count);
		j++;
	}
}

void		r_map(char *file, t_window *window, int fd)
{
	int		i;
	int		j;
	char	*buff;
	char	**temp;

	i = 0;
	j = 0;
	fd = open(file, O_RDONLY);
	while (0 < get_next_line(fd, &buff))
		i++;
	window->row_count = i;
	close(fd);
	fd = open(file, O_RDONLY);
	mapmem(window, fd);
	i = 0;
	while (i < window->row_count)
	{
		temp = ft_strsplit(window->space[i], ' ');
		j = 0;
		while (j++ < window->col_count)
		{
			window->int_map[i][j - 1] = ft_atoi(temp[j - 1]);
		}
		i++;
	}
}

int			open_window(t_window *window)
{
	window->mlx = mlx_init();
	window->window = mlx_new_window(window->mlx, 2560, 1440, "fdf");
	return (0);
}

void		draw_map(t_window *window)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < window->row_count)
	{
		j = 0;
		while (j < window->col_count)
		{
			if (j < window->col_count - 1)
				draw_col_line(window, j, i);
			if (i < window->row_count - 1)
				draw_row_line(window, j, i);
			j++;
		}
		i++;
	}
}

int			main(int argc, char **argv)
{
	int			i;
	int			j;
	int			fd;
	t_window	*window;

	i = 0;
	j = 0;
	fd = 0;
	window = (t_window *)malloc(sizeof(t_window));
	if (argc == 2)
	{
		open_window(window);
		r_map(argv[1], window, fd);
		draw_map(window);
		mlx_key_hook(window->window, key_hook, 0);
		mlx_loop(window->mlx);
	}
	return (0);
}
