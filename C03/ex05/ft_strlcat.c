/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:12:11 by mkimdil           #+#    #+#             */
/*   Updated: 2023/09/06 17:53:21 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (dlen >= size)
		return (size + slen);
	j = dlen;
	i = 0;
	while (src[i] != '\0' && (j < size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*int main(void)
{
	char dest[] = "Hello";
	char src[] = " World";
	unsigned int size = 11;
	ft_strlcat(dest, src, size);
	printf("%s\n",dest);
	return (0);
}*/
