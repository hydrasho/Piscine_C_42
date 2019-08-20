/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:24:18 by nda-cunh          #+#    #+#             */
/*   Updated: 2019/08/11 01:48:36 by nda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && 'Z' >= str[i]))
			str[i] = str[i];
		else
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_twothree(char *str)
{
	int i;

	i = 0;
	if (('a' <= str[i] && 'z' >= str[i]))
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (!(('A' <= str[i] && 'Z' >= str[i]) ||
				('0' <= str[i] && '9' >= str[i]) ||
				('a' <= str[i] && 'z' >= str[i])))
		{
			if (('a' <= str[i + 1] && 'z' >= str[i + 1]))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_strcpy(str, ft_strlowcase(str));
	ft_strcpy(str, ft_twothree(str));
	return (str);
}
