/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:04:47 by mkimdil           #+#    #+#             */
/*   Updated: 2023/08/21 17:50:26 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_lower == 1)
				str[i] -= 32;
			is_lower = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_lower = 0;
		else
			is_lower = 1;
		i++;
	}
	return (str);
}
