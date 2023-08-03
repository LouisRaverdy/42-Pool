/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:11:15 by lraverdy          #+#    #+#             */
/*   Updated: 2023/08/02 17:44:10 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

long	ft_atoi_base(char *str, char *base);
long	check_base(char *base);

char	*ft_strcat(char *dest, char c)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = c;
	dest[i + 1] = '\0';
	return (dest);
}

int	len_result(int len_base, int nbr)
{
	int	i;
	int	j;

	i = len_base;
	j = 1;
	while (nbr >= i)
	{
		i *= len_base;
		j++;
	}
	return (j);
}

void	ft_print_nbr_rec(long nbr, char *base, char *result, long base_len)
{
	if (nbr >= base_len)
		ft_print_nbr_rec(nbr / base_len, base, result, base_len);
	ft_strcat(result, base[nbr % base_len]);
}

char	*ft_putnbr_base(long nbr, char *base)
{
	long	base_len;
	char	*result;

	base_len = 0;
	if (!check_base(base))
		return (NULL);
	while (base[base_len])
		base_len++;
	result = malloc((len_result(base_len, nbr) + 200) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	if (nbr < 0)
	{
		ft_strcat(result, '-');
		ft_print_nbr_rec(nbr * -1, base, result, base_len);
	}
	else
		ft_print_nbr_rec(nbr, base, result, base_len);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	result;
	char	*char_result;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	char_result = ft_putnbr_base(result, base_to);
	return (char_result);
}
