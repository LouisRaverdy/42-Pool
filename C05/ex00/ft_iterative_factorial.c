/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:50:46 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/20 12:09:20 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = nb;
	if (nbr < 0)
		return (0);
	else if (nbr == 0)
		return (1);
	while (i < nb)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}
