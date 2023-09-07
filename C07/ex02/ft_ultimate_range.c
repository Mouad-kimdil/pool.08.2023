/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:12:14 by mkimdil           #+#    #+#             */
/*   Updated: 2023/08/30 21:16:42 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * (size));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (size);
}
