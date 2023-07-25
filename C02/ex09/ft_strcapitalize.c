/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:42:58 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/17 16:38:25 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_mustcapitalize(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	previous_char;

	i = 0;
	previous_char = ' ';
	while (str[i] != '\0')
	{
		if (ft_mustcapitalize(previous_char) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		previous_char = str[i];
		i++;
	}
	return (str);
}
