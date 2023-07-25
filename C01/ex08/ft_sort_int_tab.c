/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:36:09 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/13 19:04:01 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_tab;
	int	index_compare;
	int	temp;

	index_tab = 0;
	while (index_tab < size - 1)
	{
		index_compare = 0;
		while (index_compare < size - index_tab - 1)
		{
			if (tab[index_compare] > tab[index_compare + 1])
			{
				temp = tab[index_compare];
				tab[index_compare] = tab[index_compare + 1];
				tab[index_compare + 1] = temp;
			}
			index_compare++;
		}
		index_tab++;
	}
}
