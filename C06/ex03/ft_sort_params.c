/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:08:42 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/25 14:43:55 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	if (s1[index] != s2[index])
		return (s1[index] - s2[index]);
	else
		return (0);
}

void	ft_sort_tab(char *tab[], int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - i) {
			if (ft_strcmp(tab[j], tab[j + 1]) > 0) {
				char *temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (0);
	ft_sort_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
