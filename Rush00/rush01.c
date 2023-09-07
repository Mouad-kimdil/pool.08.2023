/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:26:31 by zel-moun          #+#    #+#             */
/*   Updated: 2023/08/20 20:35:25 by zel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char a, char b, char c, int len)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < len - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (len > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	print('/', '*', '\\', x);
	while (i < y - 2)
	{
		print('*', ' ', '*', x);
		i++;
	}
	if (y > 1)
		print('\\', '*', '/', x);
}
