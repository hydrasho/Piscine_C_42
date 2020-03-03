/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:40:15 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/18 18:05:55 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*newsrc;

	i = 0;
	while (src[i])
	{
		i++;
	}
	newsrc = malloc(sizeof(char) * i + 1);
	if (newsrc == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		newsrc[i] = src[i];
		i++;
	}
	newsrc[i] = '\0';
	return (newsrc);
}
