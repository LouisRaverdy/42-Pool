/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:52:19 by pfilippi          #+#    #+#             */
/*   Updated: 2023/08/02 09:58:53 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_rand(unsigned int old_val)
{
	return (old_val * 1103515245 + 12345);
}

int	**gen_rand_tab(int x, int y, unsigned int prop, unsigned int seed)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	tab = malloc(sizeof(int *) * x);
	while (i < x)
	{
		j = 0;
		tab[i] = malloc(sizeof(int) * y);
		while (j < y)
		{
			seed = ft_rand(seed);
			if (seed % 100 < prop)
				tab[i][j] = 0;
			else
				tab[i][j] = 1;
			j++;
		}
		i++;
	}
	return (tab);
}
