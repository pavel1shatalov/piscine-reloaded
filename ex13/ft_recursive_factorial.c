/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:57:44 by ggerhold          #+#    #+#             */
/*   Updated: 2018/11/29 20:10:04 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fac;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
		fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}
