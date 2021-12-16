/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturna <tturna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 06:31:30 by tturna            #+#    #+#             */
/*   Updated: 2021/12/05 06:38:17 by tturna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int SIZE)
{
	int	index;
	int	c;
	int	aux[SIZE];

	c = 0;
	index = SIZE - 1;
	while (index >= 0)
	{
		aux[c] = tab[index];
		index--;
		c++;
	}
	c = 0;
	while (c < SIZE)
	{
		tab[c] = aux[c];
		c++;
	}
}
