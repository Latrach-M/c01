/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohlatra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:30:22 by mohlatra          #+#    #+#             */
/*   Updated: 2023/08/21 17:35:18 by mohlatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (size > x)
	{
		y = x + 1;
		while (size > y)
		{
			if (tab[x] > tab[y])
			{
				z = tab[x];
				tab[x] = tab[y];
				tab[y] = z;
			}
		y++;
		}
	x++;
	}
}
