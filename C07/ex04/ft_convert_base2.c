/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:11:12 by lraverdy          #+#    #+#             */
/*   Updated: 2023/08/02 14:32:54 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+'
			|| base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else
		return (0);
}

void	ft_atoi(char *str, char *base, int base_len, long *number)
{
	int	i;

	i = 0;
	while (base[i] != *str)
	{
		if (base[i] == '\0')
		{
			*number = 0;
			return ;
		}
		i++;
	}
	*number = (*number * base_len) + i;
}

void	ft_loop(char *str, char *base, int base_len, long *number)
{
	while (*str && (ft_alpha(*str) || (*str >= '0' && *str <= '9')))
	{
		ft_atoi(str, base, base_len, number);
		str++;
	}
}

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	base_len;
	long	number;
	int		signe;

	i = 0;
	base_len = 0;
	number = 0;
	signe = 1;
	if (!check_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	ft_loop(&str[i], base, base_len, &number);
	return (number * signe);
}
