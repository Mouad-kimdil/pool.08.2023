/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:48:48 by mkimdil           #+#    #+#             */
/*   Updated: 2023/08/26 17:56:16 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	blen;

	blen = ft_strlen(base);
	i = 0;
	if (blen < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] == base[i + 1])
			return (0);
		else if (base[i] == ' ' || base[i] == '\t'
			|| base[i] == '\n')
			return (0);
		else
			i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		blen;
	char	arr[100];
	int		i;
	int		j;

	blen = ft_strlen(base);
	if (check(base) == 1)
	{
		i = 0;
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (nbr)
		{
			arr[i] = base[nbr % blen];
			nbr /= blen;
			i++;
		}
		j = i;
		while (j-- >= 0)
			write(1, &arr[j], 1);
	}
}
