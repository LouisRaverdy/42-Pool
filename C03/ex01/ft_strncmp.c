/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:45:24 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/23 21:36:24 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	is_valid(int tab[4][4], int x, int y, int size, int value)
{
	int i;

	// Vérifier si la valeur existe déjà dans la colonne
	for (i = 0; i < size; i++)
	{
		if (tab[i][y] == value)
			return false;
	}

	// Vérifier si la valeur existe déjà dans la ligne
	for (i = 0; i < size; i++)
	{
		if (tab[x][i] == value)
			return false;
	}

	return true;
}

void	try_fill_case(int tab[4][4], int x, int y, int size)
{
	if (tab[x][y] == 0)
	{
		int value;
		for (value = 1; value <= size; value++)
		{
			if (is_valid(tab, x, y, size, value))
			{
				tab[x][y] = value;
				return;
			}
		}
	}
}


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
