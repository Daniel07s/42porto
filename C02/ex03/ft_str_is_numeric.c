/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:25:19 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 08:25:21 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i = i +1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main()
{
	int numeric;
	int numeric1;
	int numeric2;
	char n[] = "tres pratos de trigo para tres tigres tristes";
	char n1[] = "07051999";
	char n2[] = "!@##$%$#%";
	numeric = ft_str_is_numeric(n);
	printf("Resultado do meu retorno em texto: %d\n", numeric);
	
	numeric1 = ft_str_is_numeric(n1);
	printf("Resultado do meu retorno em numeros: %d\n", numeric1);
	
	numeric2 = ft_str_is_numeric(n2);
	printf("Resultado do meu retorno simbolos: %d\n", numeric2);
}*/
