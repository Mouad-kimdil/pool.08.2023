/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:45:25 by mkimdil           #+#    #+#             */
/*   Updated: 2023/09/06 11:47:52 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mou(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - size)
		write(1, ", ", 2);
}

void	ft_recu(int *arr, int size, int index, int value)
{
	if (index == size)
	{
		ft_mou(arr, size);
		return ;
	}
	while (value <= 10 - size + index)
	{
		arr[index] = value;
		ft_recu(arr, size, index + 1, value + 1);
		value++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	ft_recu(arr, n, 0, 0);
}
