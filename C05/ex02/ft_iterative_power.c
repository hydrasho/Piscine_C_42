/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:47:08 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/17 18:39:29 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resultat = nb;
	while (1 < power)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
