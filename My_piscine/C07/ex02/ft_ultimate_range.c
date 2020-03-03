/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 00:45:44 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/19 21:20:59 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *)malloc(sizeof(int) * diff);
		if (*range == NULL)
			return (-1);
		while (diff >= i)
		{
			(*range)[i] = min + i;
			i++;
		}
	}
	return (diff);
}
