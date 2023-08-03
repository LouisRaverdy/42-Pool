/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:51:00 by lraverdy          #+#    #+#             */
/*   Updated: 2023/08/02 16:21:11 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	size;
	int	*tab;

	i = min;
	j = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	if (size < 0)
		size = -size;
	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
