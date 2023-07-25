/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:18:57 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/19 18:46:45 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	if (c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	number;

	i = 0;
	signe = 1;
	number = 0;
	while (is_whitespace(str[i]))
		i++;
	while (str[i])
	{
		if (str[i] == '-')
			signe = signe * -1;
		else if (str[i] != '+')
			break ;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * signe);
}
