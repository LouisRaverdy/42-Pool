/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:03:48 by lraverdy          #+#    #+#             */
/*   Updated: 2023/08/02 16:22:04 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	size;

	i = min;
	j = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (size < 0)
		size = -size;
	*range = malloc(size * sizeof(int));
	if (range == NULL)
		return (-1);
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (size);
}
