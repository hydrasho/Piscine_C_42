/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 23:25:57 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/18 16:11:27 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int a;

	i = 1;
	a = 0;
	while (nb > i)
	{
		if ((nb % i) == 0)
			a++;
		i++;
	}
	if (a == 1)
		return (a);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (2147483647);
}
