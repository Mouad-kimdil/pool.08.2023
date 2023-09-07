/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:01 by mkimdil           #+#    #+#             */
/*   Updated: 2023/09/02 16:36:27 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
