/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 22:36:44 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/06 22:54:40 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y] && y < size)
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	x = 0;
	while (src[x])
	{
		x++;
	}
	return (x);
}
