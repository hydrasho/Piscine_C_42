/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:13:32 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/20 00:09:59 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int range;
	int i;

	i = 0;
	range = max - min;
	if (range < 0 || min == max)
		return (NULL);
	ptr = malloc(sizeof(int) * range);
	while (range > i)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
