/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:11:27 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/13 22:12:15 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return (str);
	while (str[j])
	{
		while (to_find[count] == str[j + count])
		{
			if (count == i - 1)
				return (str + j);
			count++;
		}
		count = 0;
		j++;
	}
	return (0);
}
