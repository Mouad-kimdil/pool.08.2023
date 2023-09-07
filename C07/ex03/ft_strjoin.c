/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:59:08 by mkimdil           #+#    #+#             */
/*   Updated: 2023/09/02 19:59:56 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dlen;
	int	i;

	dlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}

int	len(int size, char **strs, char *sep)
{
	int	i;
	int	final_len;

	i = 0;
	final_len = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		if (i < size - 1)
			final_len += ft_strlen(sep);
		i++;
	}
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		final_length;
	char	*result;

	if (size <= 0 || strs == NULL || sep == NULL)
		return (NULL);
	final_length = len(size, strs, sep);
	result = (char *)malloc(final_length + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
