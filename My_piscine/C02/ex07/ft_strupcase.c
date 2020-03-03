/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:28:52 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/06 18:36:39 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && 'z' >= str[i]))
			str[i] = str[i];
		else
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}