/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:27:27 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/13 19:06:52 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index_tab;
	int	index_decrement_tab;

	index_tab = 0;
	index_decrement_tab = size - 1;
	while (index_tab < index_decrement_tab)
	{
		temp = tab[index_tab];
		tab[index_tab] = tab[index_decrement_tab];
		tab[index_decrement_tab] = temp;
		index_tab++;
		index_decrement_tab--;
	}
}
