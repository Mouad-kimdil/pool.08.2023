/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:43:17 by mkimdil           #+#    #+#             */
/*   Updated: 2023/08/27 10:47:32 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	result;
	int			i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
