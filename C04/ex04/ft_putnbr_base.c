/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:31:01 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/19 19:34:44 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_whitespace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	if (c == ' ')
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
			|| is_whitespace(base[i]))
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

void	ft_print_nbr_rec(unsigned long nbr, char *base, int base_len)
{
	if (nbr >= (unsigned long)base_len)
		ft_print_nbr_rec(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!check_base(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print_nbr_rec((long)nbr * -1, base, base_len);
	}
	else
		ft_print_nbr_rec((long)nbr, base, base_len);
}
