/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:48:23 by ggerhold          #+#    #+#             */
/*   Updated: 2018/11/25 15:50:14 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (s1 || s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 0)
	{
		while (--ac > 0)
		{
			i = 0;
			while (i < ac)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
					ft_swap(&av[i], &av[i + 1]);
				i++;
			}
		}
		i = 1;
		while (av[i])
		{
			ft_putstr(av[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
