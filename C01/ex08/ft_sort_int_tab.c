/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:15:06 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/05 21:22:49 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int tmptab[size];
	int size2;

	size2 = size;
	x = 0;
	while (x < 9)
	{
		while (size2 - 1 > 0)
		{
			if (tab[size2] == x)
			{
				tmptab[size2] = tab[size2];
				size2++;
			}
			size2--;
		}
	}
}
int main()
{
	int a[5] = {0,5,2,1,7};

	ft_sort_int_tab(a, 4);

	write(1, &a[0], 1);
	write(1, &a[1], 1);
	write(1, &a[2], 1);
	write(1, &a[3], 1);
	write(1, &a[4], 1);
	return 0;
}
