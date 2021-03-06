/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:21:52 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/17 17:31:11 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	resultat = nb;
	i = 1;
	while (nb > i)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
