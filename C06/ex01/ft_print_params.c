/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:29:09 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/18 17:35:48 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	c;

	if (argc <= 1)
		return (0);
	a = 1;
	while (a < argc)
	{
		c = 0;
		while (argv[a][c] != '\0')
		{
			write(1, &argv[a][c], 1);
			c++;
		}
		write(1, "\n", 1);
		a++;
	}
}
