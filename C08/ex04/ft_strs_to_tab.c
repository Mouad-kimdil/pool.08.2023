/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:11:43 by mkimdil           #+#    #+#             */
/*   Updated: 2023/09/05 00:11:18 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(str);
	dup = (char *) malloc(len + 1);
	if (!dup)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

/*int main(int argc, char **argv)
{
	(void)argv;
    t_stock_str *arr = ft_strs_to_tab(argc - 1, &argv[1]);
	int i;
	i = 0;

    while (i < argc - 1)
    {
        printf("String %d:\n", i + 1);
        printf("  Size: %d\n", arr[i].size);
        printf("  String: %s\n", arr[i].str);
        printf("  Copy: %s\n", arr[i].copy);
		i++;
    }

    return 0;
}*/
