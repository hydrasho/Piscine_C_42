/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 23:25:05 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/20 00:11:00 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_compte_octect(char **strs, int size, int *res)
{
	int i;
	int x1;

	i = 0;
	x1 = 0;
	while (size > x1)
	{
		while (strs[x1][i])
			i++;
		*res = i + *res;
		x1++;
		i = 0;
	}
}

void	ft_compte_taille(int size, char **strs, int *res)
{
	int i;
	int x1;

	i = 0;
	x1 = 0;
	while (size > x1)
	{
		while (strs[x1][i])
			i++;
		*res = i + *res;
		x1++;
		i = 0;
	}
}

void	ft_remplie_fonction(char **strs, char *sep, char *tab, int res)
{
	int a;
	int i;
	int x1;

	i = 0;
	x1 = 0;
	a = 0;
	while (res - 1 > i)
	{
		if (strs[x1][a] == '\0')
		{
			a = 0;
			while (sep[a])
				tab[i++] = sep[a++];
			a = 0;
			x1++;
		}
		tab[i++] = strs[x1][a++];
	}
	tab[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		res;
	char	*tab;

	res = 0;
	i = 0;
	if (size == 0)
	{
		tab = malloc(sizeof(char) * 1);
		tab[0] = '\0';
		return (tab);
	}
	ft_compte_octect(strs, size, &res);
	while (sep[i])
		i++;
	res = res + (i * (size - 1) + 1);
	tab = malloc(sizeof(char) * (res));
	ft_remplie_fonction(strs, sep, tab, res);
	return (tab);
}
