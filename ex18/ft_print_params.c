/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:33:15 by ggerhold          #+#    #+#             */
/*   Updated: 2018/11/29 17:03:13 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 0)
	{
		while (av[i])
		{
			ft_putstr(av[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
