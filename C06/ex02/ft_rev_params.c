/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 00:40:58 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/18 00:43:53 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i != 0)
	{
		ft_putstr(argv[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
