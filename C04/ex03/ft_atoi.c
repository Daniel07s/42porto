/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:21:44 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/18 13:52:46 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	resultado;

	i = 0;
	n = 1;
	resultado = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n = n * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (resultado * 10) + (str[i] - '0');
		i++;
	}
	return (resultado * n);
}
/*int	main(void)
{
	char *ptr = " ---+--+1234ab567";
	printf("%d", ft_atoi(ptr));
}*/
