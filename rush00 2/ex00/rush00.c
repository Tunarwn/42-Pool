/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeskin <ekeskin@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:00:56 by ekeskin           #+#    #+#             */
/*   Updated: 2021/11/28 18:01:18 by ekeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	check(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}

void	rush(int g, int y)
{
	int	ig;
	int	iy;

	iy = 1;
	g = check(g);
	y = check(y);
	while (iy <= y && g > 0)
	{
		ig = 1;
		while (ig <= g)
		{
			if ((ig != 1 && ig != g) && (iy == 1 || iy == y))
				ft_putchar('-');
			else if ((iy != 1 && iy != y) && (ig == 1 || ig == g))
				ft_putchar('|');
			else if ((ig == 1) || (ig == g) || (iy == 1) || (iy == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			ig++;
		}
		ft_putchar('\n');
		iy++;
	}
}
