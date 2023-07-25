/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:07:13 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/19 09:19:08 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	find_corresp(char *str, char *to_find)
{
	int	j;

	j = 0;
	while (to_find[j] && str[j])
	{
		if (str[j] != to_find[j])
			return (0);
		j++;
	}
	return (to_find[j] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (find_corresp(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}
