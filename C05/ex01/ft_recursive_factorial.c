/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:07:04 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/20 12:13:31 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	if (nbr < 0)
		return (0);
	else if (nbr == 0)
		return (1);
	else
		return ((nb * ft_recursive_factorial(nb - 1)));
}
