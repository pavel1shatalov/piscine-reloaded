/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:48:49 by ggerhold          #+#    #+#             */
/*   Updated: 2018/11/29 18:25:54 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 1

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_puterr("File name missing.\n");
	else if (ac > 2)
		ft_puterr("Too many arguments.\n");
	else
		ft_display_file(av[1]);
	return (0);
}
