/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:25:53 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/24 13:58:41 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	p_sqrt(long min, long max, int nb)
{
	if (min * min == nb)
		return (min);
	if (max * max == nb)
		return (max);
	return (0);
}

int	ft_sqrt(int nb)
{
	long	min;
	long	middle;
	long	max;

	min = 0;
	max = nb;
	middle = nb / 2;
	if (nb <= 0)
		return (0);
	while (1)
	{
		if (middle * middle > nb)
			max = middle;
		else if (middle * middle < nb)
			min = middle;
		else
			return (middle);
		middle = (max + min) / 2;
		if (max - min <= 1)
			return (p_sqrt(min, max, nb));
	}
	return (0);
}
