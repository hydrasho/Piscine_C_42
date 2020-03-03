/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:13:19 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/15 19:04:34 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nombre;
	int negative;

	negative = 0;
	nombre = 8;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nombre = nombre * (-1);
		i++;
	}
	if (nombre <= 0)
		negative = 1;
	nombre = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		nombre = (nombre * 10) + str[i++] - 48;
	if (negative == 1)
		nombre = nombre * (-1);
	return (nombre);
}
