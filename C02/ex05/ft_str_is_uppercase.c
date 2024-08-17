/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:39:23 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 10:39:26 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	int	uppercase;
	int	uppercase1;
	int	uppercase2;
	int	uppercase3;	
	char letter[] = "umpatoafogandonumaoiscina";
	char letter1[] = "SURFINGINTHEPISCINE";
	char letter2[] = "147369";
	char letter3[] = "!@#@$%#;";
	
	uppercase = ft_str_is_uppercase(letter);
	printf("Resultado do texto em minusculo: %d\n", uppercase);
	
	uppercase1 = ft_str_is_uppercase(letter1);
	printf("Resultado do texto em maiuscula: %d\n", uppercase1);
	
	uppercase2 = ft_str_is_uppercase(letter2);
	printf("Resultado do texto em numeros: %d\n", uppercase2);
	
	uppercase3 = ft_str_is_uppercase(letter3);
	printf("Resultado do texto em simbulos: %d\n", uppercase3);
}*/
