/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icalvert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:07:50 by icalvert          #+#    #+#             */
/*   Updated: 2018/08/30 12:47:17 by icalvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <mlx.h>
#include <fcntl.h>

char	***mapmem(char *file)
{
	int		i;
	int		fd;
	char	*buf;
	char	***mem;

	i = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &buf))
		i++;
	mem = (char ***)malloc(sizeof(char *) * i + 1);
	return (mem);
}

char	***r_map(char *map)
{
	char	***read_map;
	char	*buff;
	int		fd;
	int		i;

	i = 0;
	fd = open(map, O_RDONLY);
	read_map = mapmem(map);
	while (get_next_line(fd, &buff))
	{
		read_map[i] = ft_strsplit(buff, ' ');
		i++;
	}
	read_map[i] = NULL;
	close(fd);
	return (read_map);
}

int		open_window(t_window *window)
{
	window->mlx = mlx_init();
	window->window = mlx_new_window(window->mlx, 800, 800, "fdf");
	return (0);
}

int		main(int argc, char **argv)
{
	int			i;
	int			j;
	char		***ar;
	t_coord		coord;
	t_window	window;

	j = 0;
	if (argc == 2)
	{
		ar = r_map(argv[1]);
		while (j < 11)
		{
			i = 0;
			while (i < 19)
			{
				write(1, ar[j][i], 3);
				ft_putchar(' ');
				if (ft_strlen(ar[j][i]) == 1)
					ft_putchar(' ');
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	open_window(&window);
	coord.x1 = 50;
	coord.y1 = 50;
	coord.x2 = 200;
	coord.y2 = 200;
	draw_line(&window, &coord);
	mlx_key_hook(window.window, key_hook, 0);
	mlx_loop(window.mlx);
 	return (0);
}
