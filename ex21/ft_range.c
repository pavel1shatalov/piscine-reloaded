/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <ggerhold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:13:49 by ggerhold          #+#    #+#             */
/*   Updated: 2018/12/01 19:46:19 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (max > min)
	{
		if (!(arr = (int *)malloc(sizeof(*arr) * (max - min))))
			return (NULL);
		while (i < max - min)
		{
			arr[i] = min + i;
			i++;
		}
		return (arr);
	}
	else
		return (NULL);
}
