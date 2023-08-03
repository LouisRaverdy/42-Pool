/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:34:25 by lraverdy          #+#    #+#             */
/*   Updated: 2023/08/02 17:02:04 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	calc_length_sep(char *sep, int *length)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	*length += i;
}

int	calc_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		if (i < size - 1)
		{
			calc_length_sep(sep, &len);
		}
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	if (size == 0)
	{
		result = malloc(1 * sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = calc_length(size, strs, sep);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
