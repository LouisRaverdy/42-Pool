/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:26:03 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/16 12:22:03 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (str < 32 || str > 126)
		return (0);
	else
		return (1);
}

void	ft_puthex(char str)
{
	char			*hex_chars;
	unsigned char	c;

	hex_chars = "0123456789abcdef";
	c = (unsigned char)str;
	write(1, "\\", 1);
	write(1, &hex_chars[c / 16], 1);
	write(1, &hex_chars[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			ft_puthex(str[i]);
		i++;
	}
}
