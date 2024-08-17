/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miazeved <miazeved@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:02:17 by miazeved          #+#    #+#             */
/*   Updated: 2024/08/04 12:50:13 by miazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	lin;

	lin = 0;
	while (lin < y)
	{
		col = 0;
		while (col < x)
		{
			if ((lin == 0 || lin == y - 1) && col == 0)
				ft_putchar('A');
			else if ((lin == 0 || lin == y - 1) && (col != 0 && col != x - 1))
				ft_putchar('B');
			else if ((lin == 0 || lin == y - 1) && (col == x - 1))
				ft_putchar('C');
			else if ((lin != 0 && lin != y -1) && (col == 0 || col == x -1))
				ft_putchar('B');
			else if ((lin != 0 && lin != y -1) && (col != 0 || col != x -1))
				ft_putchar(' ');
			col++;
		}
		if (x > 0)
			ft_putchar('\n');
		lin++;
	}
}
