/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:49:40 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/13 09:01:39 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int i, int j)
{
	char	tmp;

	tmp = i / 10 + '0';
	write(1, &tmp, 1);
	tmp = i % 10 + '0';
	write(1, &tmp, 1);
	write(1, " ", 1);
	tmp = j / 10 + '0';
	write(1, &tmp, 1);
	tmp = j % 10 + '0';
	write(1, &tmp, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		print_digits(i, j);
		if (!(i == 98 && j == 99))
		{
			write(1, ", ", 2);
		}
		j ++;
		if (j > 99)
		{
			i ++;
			j = i + 1;
		}
	}
}
