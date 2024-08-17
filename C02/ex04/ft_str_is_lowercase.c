/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:41:55 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 08:41:57 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
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
	int	lowercase;
	int	lowercase1;
	int	lowercase2;
	int	lowercase3;	
	char letter[] = "frangodesfiado";
	char letter1[] = "SURFING IN THE PISCINE";
	char letter2[] = "147369";
	char letter3[] = "!@#@$%#;";
	
	lowercase = ft_str_is_lowercase(letter);
	printf("Resultado do texto em minusculo: %d\n", lowercase);
	
	lowercase1 = ft_str_is_lowercase(letter1);
	printf("Resultado do texto em maiuscula: %d\n", lowercase1);
	
	lowercase2 = ft_str_is_lowercase(letter2);
	printf("Resultado do texto em numeros: %d\n", lowercase2);
	
	lowercase3 = ft_str_is_lowercase(letter3);
	printf("Resultado do texto em simbulos: %d\n", lowercase3);
}*/
