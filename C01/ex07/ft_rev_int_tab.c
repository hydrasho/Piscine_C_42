/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:07:31 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/05 18:05:40 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tempchange;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			tempchange = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tempchange;
			i++;
		}
		size--;
	}
}
