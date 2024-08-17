/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:55:30 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/03 15:55:33 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combo(void)

{
	int	um;
	int	dois;
	int	tres;

	um = '0';
	while (um <= '7')
	{
		dois = um +1;
		while (dois <= '8')
		{
			tres = dois +1;
			while (tres <= '9')
			{
				write(1, &um, 1);
				write(1, &dois, 1);
				write(1, &tres, 1);
				if (um != '7')
					write(1, ",", 2);
				tres = tres +1;
			}
			dois = dois +1;
		}
		um = um +1;
	}
}

int	main(void)
{
	ft_print_combo();
}
